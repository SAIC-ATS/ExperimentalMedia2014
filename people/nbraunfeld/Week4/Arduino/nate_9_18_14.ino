/* Blink Morse Code
Blink Led

What God Hath Wrought
Morse code for each word as follows

.__ .... ._ _
... ._ _ ....
__. .. _..
.__ ... .. .._ __. ....

1. dit= . (one unit length) 
2. dah= - (three unit length) 
3. inter element gap between dits and dahs (one unit length)
4. short gap between letters (three units long)
5. medium gap between words (seven untis long).
*/

int led =13;


char morseString[] = ". _ _ + . . . . + . _ + _ | . . . + . _ + _ + . . . . | _ _ . + . . + _ . . | . _ _ + . . . + . . + . . _ +  _ _ . + . . . .";

void setup(){
  
  pinMode(led, OUTPUT);
  

}

void loop(){
  
  
 for (int x=0; x<52; x++) {
 char currentChar = morseString[x];


if (currentChar == '.')
{digitalWrite (led, HIGH);
delay (100);
digitalWrite (led, LOW);
delay (100);
}

else if (currentChar == '_')
{digitalWrite (led, HIGH);
delay (300);
digitalWrite (led, LOW);
delay (100);
}

else if (currentChar == '+')
{digitalWrite (led, LOW);
delay (300);
digitalWrite (led, LOW);
delay (100);
}
 
else if (currentChar == '|')
{digitalWrite (led, LOW);
delay (700);
digitalWrite (led, LOW);
delay (100);
}


  }
}


  
  


