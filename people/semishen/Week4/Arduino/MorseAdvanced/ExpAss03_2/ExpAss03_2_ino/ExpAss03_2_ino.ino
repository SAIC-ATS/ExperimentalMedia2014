/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int sb = 250; //shortBeep;
int pause = 250;
int lb = 800; //longBeep;
int space = 1000;
int ending = 2000;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  //OOP
  dash();dash();dash();delay(space);//o
  dash();dash();dash();delay(space);//o
  dot();dash();dash();dot();delay(space);//p
  
  //end
  delay(ending);
  
}

void dot()
{
  digitalWrite(led, HIGH);   
  delay(sb);
  digitalWrite(led, LOW);
  delay(pause); 
}

void dash()
{
  digitalWrite(led, HIGH);   
  delay(lb);
  digitalWrite(led, LOW);
  delay(pause); 
}
