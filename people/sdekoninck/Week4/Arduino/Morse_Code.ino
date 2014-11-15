
#define step_time 1000 //multiply by length for each letter

//  this is the time per "step" in milliseconds
//dot is basic unit of time
//dash is equal to 3 dots
//time between dash and dots is 1 dot
//time between letters is 3 dots
//time between words is 7 dots



void setup(){
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
  
  pattern1();
  delay(step_time);
  pattern2();
  delay(step_time);
  pattern3();
  delay(step_time * 3000);
  pattern4();
  delay(step_time);
  pattern5();
  delay(step_time * 3000);
  pattern6();
  delay(step_time * 3000);
  pattern7();
  delay(step_time);
  pattern8();
  delay(step_time);
  patter9();
  delay(step_time);
  
     
}

void pattern1(){
  digitalWrite(13, HIGH);
  
}

void pattern2(){
  digitalWrite(13, LOW);
}

void pattern3(){
  digitalWrite(13,HIGH);
}

void pattern4(){
  digitalWrite(13, LOW);
}

void pattern5(){
  digitalWrite(13, HIGH);
}

void pattern6(){
  digitalWrite(13, LOW);
}

void pattern7(){
  digitalWrite(13, HIGH);
}

void pattern8(){
  digitalWrite(13, LOW);
}

void patter9(){
  digitalWrite(13, HIGH);
}

