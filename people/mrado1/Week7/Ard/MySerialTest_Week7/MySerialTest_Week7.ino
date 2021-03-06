const int POT_PIN_0 = A5; // sets potentiometer to A0
const int LED_0 = 11; // sets LED negative side to pin 3
const int LED_1 = 10;
const int sense0 = A0; // photocell on A0
int lightValue = 0; // store value from sense01

void setup() {
  pinMode(LED_0, OUTPUT); // sets the pin as output
  pinMode(LED_1, OUTPUT); // sets the pin as output
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  int potValue = analogRead(POT_PIN_0); // read value between 0 - 1023
  int mappedPotValue = map(potValue, 0, 1023, 0, 255); // maps values
  int lightValue = analogRead(sense0); // read light sensor value
  int mappedLightValue = map(lightValue, 350, 1000, 0, 255); // maps input values of LED
  
//  if (val0 >= light) {
//    digitalWrite(LED_0, HIGH);
//  } else {
//    digitalWrite(LED_0, LOW);
//  }
//  
//
//  while (Serial.available() > 0)
//  {
//    sliderValue = Serial.read();
//  }
  
  analogWrite(LED_0, mappedPotValue); // 0-255
  analogWrite(LED_1, mappedLightValue); // 0-255
  delay(100);
  
  Serial.print(mappedPotValue);
  Serial.print(",");
  Serial.println(mappedLightValue);
}
