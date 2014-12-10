//const int POT_PIN_3 = A3;// Potentiometer input. (const: the integer value can't be changed) 
const int POT_PIN_0 = A0;
const int POT_PIN_1 = A1;
const int LED_0 = 3; // LED PWM output

int ofSliderValue; // value from OF

void setup()
{
  pinMode(LED_0,OUTPUT); // for digital input or output
  Serial.begin(9600);
  
}


void loop()
{
//  int potValue3 = analogRead(POT_PIN_3); //value range: 0 -1023 or 2^10
//  Serial.println(potValue);
  int potValue0 = analogRead(POT_PIN_0);
  int potValue1 = analogRead(POT_PIN_1);

  
  while(Serial.available() > 0)
  {
    ofSliderValue = Serial.read();
    
  }
  
  analogWrite(LED_0, ofSliderValue); //value range: 0 -255 or 2^8 or byte
  
  Serial.print(potValue0);
  Serial.print(",");
  Serial.print(potValue1);
//  Serial.print(",");
//  Serial.print(potValue3);
  Serial.print("\n");
  
  delay(3);
  
  
}
