const int PHO_PIN_1 = A2;

const int POT_PIN_0 = A3;//potentiometer input
const int POT_PIN_1 = A4;
const int POT_PIN_2 = A5;

//const int LED_0 = 3;//led output

int sliderValue = 0;//value from open frameworks 

void setup(){
 // pinMode(LED_0, OUTPUT); //sets the pin as output 
  Serial.begin(9600);
}

void loop(){
  int phoValue1 = analogRead(PHO_PIN_1);
  int potValue0 = analogRead(POT_PIN_0);// returns a value between 0-1023
  int potValue1 = analogRead(POT_PIN_1);
  int potValue2 = analogRead(POT_PIN_2);
  
  
  Serial.print(phoValue1);
  Serial.print(",");
  Serial.print(potValue0);
  Serial.print(",");
  Serial.print(potValue1);
  Serial.print(",");
  Serial.print(potValue2);
  Serial.print("\n");
  
  delay(100);
  
  
  
//  int mappedPotValue0 = map(potValue0, 0, 1023, 0, 255);//map 0-1023 to 0-255
//  int mappedPotValue1 = map(potValue1, 0, 1023, 0, 255);
  
//  while(Serial.available() > 0){
//    sliderValue = Serial.read();
//  }
//  
//  analogWrite(LED_0, sliderValue);
  
  //Serial.write(mappedPotValue); //send the pot value back to open frameworks 
}
