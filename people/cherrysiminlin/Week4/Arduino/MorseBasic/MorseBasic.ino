const int led_pin = 13;
const int SYMBOL_SEPARATION = 300;
const int LETTER_SEPARATION = SYMBOL_SEPARATION*3;
const int WORD_SEPARATION = SYMBOL_SEPARATION*7;

void setup() {
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}

void dit(){
  digitalWrite(led_pin, HIGH);
  delay(300);
  digitalWrite(led_pin, LOW);
}

void dash(){
  digitalWrite(led_pin, HIGH);
  delay(900);
  digitalWrite(led_pin, LOW);
}


void loop() {
  //W
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("W");
  delay(LETTER_SEPARATION);
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("H");
  delay(LETTER_SEPARATION);
  
  //A
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("A");
  delay(LETTER_SEPARATION);
  
  //T
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("T");
  
  delay(WORD_SEPARATION);
  
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("H");
  delay(LETTER_SEPARATION);
  
  //A
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("A");
  delay(LETTER_SEPARATION);
  
  //T
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("T");
  delay(LETTER_SEPARATION);
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("H");
  
  delay(WORD_SEPARATION);
  
  
  //G
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("G");
  delay(LETTER_SEPARATION);
  
  //O
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("O");
  delay(LETTER_SEPARATION);
  
  //D
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("D");
  
  delay(WORD_SEPARATION);
  
  
  //W
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("W");
  delay(LETTER_SEPARATION);
  
  //R
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("R");
  delay(LETTER_SEPARATION);
  
  //o
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("O");
  delay(LETTER_SEPARATION);
  
  //U
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("U");
  delay(LETTER_SEPARATION);
  
  //G
  dash();
  delay(SYMBOL_SEPARATION);
  dash();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("G");
  delay(LETTER_SEPARATION);
  
  //H
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  dit();
  delay(SYMBOL_SEPARATION);
  Serial.print("H");
  delay(LETTER_SEPARATION);
  
  //T
  dash();
  delay(SYMBOL_SEPARATION);
  Serial.print("T");
  
  delay(WORD_SEPARATION);

  delay(1000);
}
