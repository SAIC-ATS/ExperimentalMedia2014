int motorPin = 9; 

void setup() { 
  
  pinMode(motorPin, OUTPUT); 
  
} 

void loop() { 
  
for(int motorValue = 0 ; motorValue <= 20; motorValue +=1){ 
  analogWrite(motorPin, motorValue); 
  delay(3000); 
  
} 

for (int motorValue = 20 ; motorValue >= 0; motorValue -=1){ 
  analogWrite(motorPin, motorValue); 
  delay(50); 
} 

}
