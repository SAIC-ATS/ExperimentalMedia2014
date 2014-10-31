/*This is a program to convert text typed into Serial Monitor into 
International Morse code output to an LED
#Make it blink any input code from Serial monitor
*/

//set pin output 13 as constant
//milisecond delay of a dot
int ledPin=13;
int dotDelay = 200;

char* letters[] = {
  ".-",     // A
  "-...",   // B
  "-.-.",   // C
  "-..",    // D
  ".",      // E
  "..-.",   // F
  "--.",    // G
  "....",   // H
  "..",     // I
  ".---",   // J
  "-.-",    // K
  ".-..",   // L
  "--",     // M
  "-.",     // N
  "---",    // O
  ".--.",   // P
  "--.-",   // Q
  ".-.",    // R
  "...",    // S
  "-",      // T
  "..-",    // U
  "...-",   // V
  ".--",    // W
  "-..-",   // X
  "-.--",   // Y
  "--.."    // Z
};

char* numbers[] = {
  "-----",   // 1
  ".----",   // 2
  "..---",   // 3
  "...--",   // 4
  "....-",   // 5
  ".....",   // 6
  "-....",   // 7
  "--...",   // 8
  "---..",   // 9
  "----."
};

void setup()
{
  //Setup pin 13 as Output
  pinMode(ledPin, OUTPUT);
  //Use for serial input:
  Serial.begin(9600);

}

void loop()
{
 char ch;
 if (Serial.available())  // is there something to be read form serial?
{
 ch=Serial.read();  //read a single letter
 Serial.print(ch);   //print out character that'll be sent
 
 //is it lowercase?
 if (ch >= 'a' && ch <= 'z')
  {
    morseCodeSequence(letters[ch - 'a']);
  }

  else if (ch >= 'A' && ch <= 'Z') //uppercase letters
{
  morseCodeSequence(letters[ch - 'A']);
  
     }
    else if (ch >= '0' && ch <= '9')    // Number
    {
      morseCodeSequence(numbers[ch - '0']);
    }
  else if (ch == ' ') //space wait for 4x delay
  {
    delay(dotDelay * 4); 
  }
} else {
  //make space between sends on serial monitor
  Serial.println(" ");
}

    Serial.println(" ");
}


void morseCodeSequence(char* sequence)
{
  int i = 0;
  //loop for each element in the array
  while (sequence[i]  != NULL) 
  {
    dotOrDash(sequence[i]); //send out dot or dash
      i++;  //Increment to the next element in the array
  }
  delay(dotDelay * 3); //gap between letters
}

void dotOrDash(char dotOrDash)
{
  digitalWrite(ledPin, HIGH);
 if (dotOrDash == '.')
{
 delay(dotDelay);
}

else // if not a dot, then it must be a dash
{
  delay(dotDelay*3);
}
digitalWrite(ledPin, LOW);
delay(dotDelay); //gap between flash
}
  
  
