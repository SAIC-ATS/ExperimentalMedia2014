/*Uses blink circuit with an LED on pin 13
//  Dot is basic unit of time
//  Dash is three dots
//  Space between dots and dashes within characters is one dot
//  Space between letters is 3 dots
//  Space between words is 7 dots
A    • −     
B    − • • •     
C    − • − •     
D    − • •     
E    •     
F    • • − •     
G    − − •     
H    • • • •     
I    • •     
J    • − − −     
K    − • −     
L    • − • •     
M    − −     
N    − •     
O    − − −     
P    • − − •     
Q    − − • −     
R    • − •     
S    • • •     
T    −     
U    • • −     
V    • • • −     
W    • − −     
X    − • • −     
Y    − • − −     
Z    − − • •
*/

char morse_code[] = ".__ .... ._ _  .... ._ _ ....  __. ___ _..  .__ ._. ___ .._ __. .... _";  // The morse code that the LED will signal
 
// constants won't change. Used here to 
// set pin numbers:
const int ledPin =  13;                 // the number of the LED pin
const int short_interval = 250;         // blink interval (milliseconds)
const int long_interval = 750;          // blink interval (milliseconds)
const int space_interval = 1750;        // blink interval (milliseconds)
const int phrase_end_interval = 5000;   // blink interval (milliseconds)
 
// Variables that will change:
int ledState = LOW;             // ledState used to set the LED
int letterSpot = 0;             // Current letter you are testing in the morse code
 
void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);    
}
 
void loop()
{
  if(morse_code[letterSpot] == '.') { // if the LED is off turn it on:
    if (ledState == LOW)
      ledState = HIGH;
      
    digitalWrite(ledPin, ledState);
    
    delay(short_interval);
  }
  else if (morse_code[letterSpot] == '_') { // if the LED is off turn it on:
    if (ledState == LOW)
      ledState = HIGH;
 
    digitalWrite(ledPin, ledState);
    
    delay(long_interval);
  }
  else if (morse_code[letterSpot] == ' '){ //Space between letters in the morse code
    delay(short_interval);
  }
  else if (morse_code[letterSpot] == '  '){ //Space between words in the morse code
    delay(space_interval);
  }
  
  if (ledState == HIGH) {  // if the LED is on turn it off:
    ledState = LOW;
    digitalWrite(ledPin, ledState);
  }
  
  if (letterSpot < sizeof(morse_code) - 1) {
    // Move to the next letter in the morse code, unless you are at the end
    letterSpot++;
  }
  else {
    // Long pause at the end of the phrase before starting over again
    letterSpot = 0;
    delay(phrase_end_interval);
  }
  
  // Small pause
  delay(short_interval);
  
}
