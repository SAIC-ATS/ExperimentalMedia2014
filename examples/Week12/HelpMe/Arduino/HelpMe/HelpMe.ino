const int pin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop() {
  while (Serial.available() > 0)
  {
    int myByte = Serial.read();
    
    if (myByte == 'L')
    {
       digitalWrite(pin, LOW);
       Serial.write('L');
    }
    else if (myByte == 'H')
    {
       digitalWrite(pin, HIGH);
       Serial.write('H');
    }
  }
  
  delay(10);
}
