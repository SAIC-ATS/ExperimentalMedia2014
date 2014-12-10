
//Pulse width modulation is our sudo-analog output
//~ports allow us to do analog out put for these projects (i.e. ~3)

const int POT_PIN_0 = A3; // Potentiometer input

const int LED_0 = 3;  // LED output

int sliderValue = 0; // Value from openFrameworks


void setup() {
  pinMode(LED_0, OUTPUT); // set the pin as output
  Serial.begin(9600);
}

void loop() {
  
  int potValue0 = analogRead(POT_PIN_0);  // returns a value between 0-1023
  

  
  int mappedPotValue0 = map(potValue0, 0, 1023, 0, 255); // mapp 0-1023 onto 0-255
  
  while (Serial.available() > 0)
  {
    sliderValue = Serial.read();
  }
  
  
  analogWrite(LED_0, sliderValue); // a value between 0-255
  
  Serial.write(mappedPotValue0); //send the pot value back to openFrameworks
  
}
