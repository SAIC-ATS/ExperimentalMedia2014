// "byte -> char"
// 

byte letterA = '0';
//byte letterA_Number = 65;

int b = 123;
String bString = "1000013";

void setup() {
  Serial.begin(9600);
}

void loop() {
//  Serial.print(...);
//  Serial.print();
//  Serial.print(123);
//  Serial.print("123");
//  Serial.println();
//  
//  Serial.write(123);
  Serial.write(1024);

  delay(1000);
}
