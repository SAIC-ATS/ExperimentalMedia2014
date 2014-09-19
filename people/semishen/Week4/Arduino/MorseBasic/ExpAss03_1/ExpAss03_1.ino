/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int sb = 200; //shortBeep;
int pause = 500;
int lb = 600; //longBeep;
int space = 1200;
int ending = 2000;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  //w
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(lb);               
  digitalWrite(led, LOW);    
  delay(space);
  
  //h
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);   
  digitalWrite(led, LOW);    
  delay(space);
  
  //a
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);        
  delay(space);
  
  //t
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(space);
  
  //space
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(space);
  
  //h
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);   
  digitalWrite(led, LOW);    
  delay(space);
  
  //a
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);        
  delay(space);
  
  //t
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(space);
  
  //h
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);   
  digitalWrite(led, LOW);    
  delay(space);
  
  //space
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(space);
  
  //g
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);               
  digitalWrite(led, LOW);    
  delay(space);
  
  //o
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(lb);               
  digitalWrite(led, LOW);    
  delay(space);  
  
  //d
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);               
  digitalWrite(led, LOW);    
  delay(space);
  
  //space
  digitalWrite(led, LOW);    
  delay(space);
  
  //w
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(lb);               
  digitalWrite(led, LOW);    
  delay(space);
  
  //r
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);               
  digitalWrite(led, LOW);    
  delay(space);
  
  //o
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(lb);               
  digitalWrite(led, LOW);    
  delay(space);  
  
  //u
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(lb);               
  digitalWrite(led, LOW);    
  delay(space); 
 
  //g
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(lb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);               
  digitalWrite(led, LOW);    
  delay(space);   
  
  //h
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(pause);               
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);  
  delay(sb);              
  digitalWrite(led, LOW);    
  delay(pause);
  digitalWrite(led, HIGH);   
  delay(sb);   
  digitalWrite(led, LOW);    
  delay(space);
  
  //t
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(lb);               
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(space);
  
  //end
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(ending);
  
  
  
}
