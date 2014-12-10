const int POT_PIN_0 = A0;  //Potentiometer input.
const int POT_PIN_1 = A1;  //Potentiometer input.
const int POT_PIN_2 = A2;  //Potentiometer input.


void setup() {
  
  Serial.begin(9600);
}

void loop(){
int potValue0= analogRead(POT_PIN_0);  //read current value of the pot with each loop (value 0-1023)
int potValue1= analogRead(POT_PIN_1); 
int potValue2= analogRead(POT_PIN_2); 


int mappedPotValue0 = map(potValue0, 0, 1023, 0, 255); //maps pot 
int mappedPotValue1 = map(potValue1, 0, 1023, 0, 255);
int mappedPotValue2 = map(potValue2, 0, 1023, 0, 255);


Serial.print(mappedPotValue0);
Serial.print(",");
Serial.print(mappedPotValue1);  
Serial.print(",");
Serial.print(mappedPotValue2); 
Serial.print("\n");

delay(100);

}  
