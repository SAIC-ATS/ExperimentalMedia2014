// Morse Code Program to write "What Hath God Wrought"

const int LED = 13; //Led connected to digital pin 13

int dit = 100; // length of dits (.) is 1 units
int dah = 300; // length of dahs (-) is 3 units
int pse = 100; // pause between character components (_) is 1 unit
int ch = 300; // space between characters (__) is 1 unit
int space = 700; // space between words is 7 units

void setup()
{
  pinMode(LED, OUTPUT); // sets the digital pin as output
}

void loop()
{
  digitalWrite(LED, HIGH);   // W ._-_-__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // h ._._._.__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // a ._-__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // t -__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, LOW);   // space
  delay(space);
  
  digitalWrite(LED, HIGH);   // H ._._._.__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // a ._-__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // t -__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // h ._._._.__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, LOW);   // space
  delay(space);
  
  digitalWrite(LED, HIGH);   // G -_-_.__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // o -_-_-__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // d -_._.__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, LOW);   // space
  delay(space);
  
  digitalWrite(LED, HIGH);   // w ._-_-__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // r ._-_.__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // o -_-_-__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);

  digitalWrite(LED, HIGH);   // u ._._-__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // g -_-_.__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dah);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // h ._._._.__
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);  
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(pse);
  digitalWrite(LED, HIGH);
  delay(dit);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, HIGH);   // t -__
  delay(dah);
  digitalWrite(LED, LOW);
  delay(ch);
  
  digitalWrite(LED, LOW);   // space
  delay(space);
}
