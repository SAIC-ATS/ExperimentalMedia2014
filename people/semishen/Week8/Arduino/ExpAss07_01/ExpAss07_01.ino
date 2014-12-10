int potPin1 = A0;
int potPin2 = A1;
int pinValue1 = 0;
int pinValue2 = 0;


void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);  
}

void loop() {
  // read the value from the sensor:
  pinValue1 = analogRead(potPin1)/4;
  pinValue2 = analogRead(potPin2)/4;
  
  Serial.print(pinValue1);
  Serial.print(","); 
  Serial.print(pinValue2);
  Serial.print("\n"); 
               
}
