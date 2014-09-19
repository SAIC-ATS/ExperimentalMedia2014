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
  
  //What
  dot();dash();dash();delay(space);//w
  dot();dot();dot();dot();delay(space);//h
  dot();dash();delay(space);//a
  dash();delay(space);//t
  delay(space);
  
  //hath
  dot();dot();dot();dot();delay(space);//h
  dot();dash();delay(space);//a
  dash();delay(space);//t
  dot();dot();dot();dot();delay(space);//h
  delay(space);
  
  //God
  dash();dash();dot();delay(space);//g
  dash();dash();dash();delay(space);//o
  dash();dot();dot();delay(space);//d
  delay(space);
  
  //wrought
  dot();dash();dash();delay(space);//w
  dot();dash();dot();delay(space);//r
  dash();dash();dash();delay(space);//o
  dot();dot();dash();delay(space);//u
  dash();dash();dot();delay(space);//g
  dot();dot();dot();dot();delay(space);//h
  dash();delay(space);//t
  
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
