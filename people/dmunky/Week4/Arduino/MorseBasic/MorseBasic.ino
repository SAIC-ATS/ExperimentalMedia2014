/*This is a program to convert text typed into Serial Monitor into 
International Morse code output to an LED
Make it say, "What hath god wrought"

*/

//set pin output 13 as constant
//milisecond delay of a dot
int ledPin=13;
int dotDelay = 200;

void setup()
{
  //Setup pin 13 as Output
  pinMode(ledPin, OUTPUT);
  //Use for serial input:
  //  Serial.begin(9600);

}

void loop()
{
  //send out morse code for "What hath god wrought"
  morseCodeSequence(".--"); //W
  morseCodeSequence("...."); //H
  morseCodeSequence(".-"); //A
  morseCodeSequence("-"); //T
  delay(2000);
  morseCodeSequence("...."); //H
  morseCodeSequence(".-"); //A
  morseCodeSequence("-"); //T
  morseCodeSequence("...."); //H
  delay(2000);
  morseCodeSequence("--."); //G
  morseCodeSequence("---"); //O
  morseCodeSequence("-.."); //D
  delay(2000);
  morseCodeSequence(".--"); //W
  morseCodeSequence(".-."); //R
  morseCodeSequence("---"); //O
  morseCodeSequence("..-"); //U
  morseCodeSequence("--."); //G
  morseCodeSequence("...."); //H
  morseCodeSequence("-"); //T
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
  
  
/*OLD 
blip(){
digitalWrite(led, HIGH);
delay(500);
digitalWrite(led, LOW);
delay(500);

bloop(){
  digitalWrite(led, HIGH);
  delay (1000);
  digitalWrite(led, LOW);
  delay (1000);
  
// some sort of delay in between blips and bloops will be needed


  if A ".-"
  if B "-..."
  if C "-.-."
  if D "-.."
  if E "."
  if F "..-."
  if G "--."
  if H "...."
  if I ".."
  if J ".---"
  if K "-.-"
  if L ".-.."
  if M "--"
  if N "-."
  if O "---"
  if P ".--."
  if Q "--.-"
  if R ".-."
  if S "..."
  if T "-"
  if U "..-"
  if V "...-"
  if W ".--"
  if X "-..-"
  if Y "-.--"
  if Z "--.."
}
*/
