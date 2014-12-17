

const int POT_PIN_0 = A3; // Potentiometer input
const int POT_PIN_1 = A4; // Potentiometer input
const int POT_PIN_2 = A5; // Potentiometer input


int sliderValue = 0; // Value from openFrameworks


void setup() {

  Serial.begin(9600);
}

void loop() {
  
  int potValue0 = analogRead(POT_PIN_0);  // returns a value between 0-1023
  int potValue1 = analogRead(POT_PIN_1); // returns a value between 0-1023
  int potValue2 = analogRead(POT_PIN_2); // returns a value between 0-1023

  
  Serial.print(potValue0);  
  Serial.print(",");
  Serial.print(potValue1);  
  Serial.print(",");
  Serial.print(potValue2);  
  Serial.print("\n");
  
  delay(100);
  
  }

