const int SYMBOL_SEPARATION = 300;
const int LETTER_SEPARATION = SYMBOL_SEPARATION*3;
const int WORD_SEPARATION = SYMBOL_SEPARATION*7;
const int BAUD_RATE = 9600;
int ledPin = 13;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(BAUD_RATE);
}

void dit(){
  digitalWrite(ledPin, HIGH);
  delay(300);
  digitalWrite(ledPin, LOW);
}

void dash(){
  digitalWrite(ledPin, HIGH);
  delay(900);
  digitalWrite(ledPin, LOW);
}

void loop(){
  //W
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("W");
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(LETTER_SEPARATION);
  Serial.print("H");
  
  //A
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("A");
  
  //T
  dash();
  delay(WORD_SEPARATION);
  Serial.print("T");
  
  
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(LETTER_SEPARATION);
  Serial.print("H");
  
  //A
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("A");
  
  //T
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("T");
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(WORD_SEPARATION);
  Serial.print("H");
  
  
  
  //G
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(LETTER_SEPARATION);
  Serial.print("G");
  
  //O
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("O");
  
  //D
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(WORD_SEPARATION);
  Serial.print("D");
  
  
  
  //W
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("W");
  
  //R
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(LETTER_SEPARATION);
  Serial.print("R");
  
  //O
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("O");
  
  //U
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(LETTER_SEPARATION);
  Serial.print("O");
  
  //G
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(LETTER_SEPARATION);
  Serial.print("G");
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(LETTER_SEPARATION);
  Serial.print("H");
  
  //T
  dash();
  delay(WORD_SEPARATION);
  Serial.print("T");
  
  delay(5000);
  
}
  
