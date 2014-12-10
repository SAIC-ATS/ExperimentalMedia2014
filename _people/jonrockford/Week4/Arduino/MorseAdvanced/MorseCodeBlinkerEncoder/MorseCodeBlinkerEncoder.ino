//Uses blink circuit with an LED on pin 13
//  Dot is basic unit of time
//  Dash is three dots
//  Space between dots and dashes within characters is one dot
//  Space between letters is 3 dots
//  Space between words is 7 dots
//Build a struct with the morse code mapping
// constants won't change. Used here to 
// set pin numbers:
int const ledPin =  13;                 // the number of the LED pin
int const short_interval = 250;         // blink interval (milliseconds)
int const long_interval = 750;          // blink interval (milliseconds)
int const space_interval = 1750;        // blink interval (milliseconds)
int const phrase_end_interval = 5000;   // blink interval (milliseconds)

static const struct {const char letter, *code;} MorseMap[] =
{
	{ 'A', ".-" },
	{ 'B', "-..." },
	{ 'C', "-.-." },
	{ 'D', "-.." },
	{ 'E', "." },
	{ 'F', "..-." },
	{ 'G', "--." },
	{ 'H', "...." },
	{ 'I', ".." },
	{ 'J', ".---" },
	{ 'K', ".-.-" },
	{ 'L', ".-.." },
	{ 'M', "--" },
	{ 'N', "-." },
	{ 'O', "---" },
	{ 'P', ".--." },
	{ 'Q', "--.-" },
	{ 'R', ".-." },
	{ 'S', "..." },
	{ 'T', "-" },
	{ 'U', "..-" },
	{ 'V', "...-" },
	{ 'W', ".--" },
	{ 'X', "-..-" },
	{ 'Y', "-.--" },
	{ 'Z', "--.." },
	{ ' ', "     " }, //Gap between words, seven units
};

 

 
// Variables that will change:
//int ledState = LOW;             // ledState used to set the LED
//int letterSpot = 0;             // Current letter you are testing in the morse code
 

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);  
  
}
 
void loop()
{
  String morseMessage = encode ("What Hath Christopher Wrought"); // The morse code that the LED will signal
  
  for(int i=0; i<=morseMessage.length(); i++)
  {
    switch(morseMessage[i])
    {
      case '.': //dot
        digitalWrite(ledPin, HIGH);
        delay(short_interval);
        digitalWrite(ledPin, LOW);
        delay(short_interval);
        
        break;
          
       case '-': //dash
         digitalWrite(ledPin, HIGH);
         delay(long_interval);
         digitalWrite(ledPin, LOW);
         delay(short_interval);
          
         break;
         
       case ' ': //space
         delay(space_interval);
    }
  }
}

String encode(const char *string)
{
  size_t i,j;
  String morseMessage = "";
  
  for(i = 0; string[i]; ++i)
  {
    for(j = 0; j < sizeof MorseMap / sizeof *MorseMap; ++j)
    {
      if(toupper(string[i]) == MorseMap[j].letter)
      {
        morseMessage += MorseMap[j].code;
        break;
      }
    }
    morseMessage += " "; //Add tailing space to seperate the chars
  }
 
  return morseMessage;  
}
 
String decode(String morse)
{
  String msg = "";
  
  int lastPos = 0;
  int pos = morse.indexOf(' ');
  while( lastPos <= morse.lastIndexOf(' ') )
  {    
    for( int i = 0; i < sizeof MorseMap / sizeof *MorseMap; ++i )
    {
      if( morse.substring(lastPos, pos) == MorseMap[i].code )
      {
        msg += MorseMap[i].letter;
      }
    }
 
    lastPos = pos+1;
    pos = morse.indexOf(' ', lastPos);
    
    // Handle white-spaces between words (7 spaces)
    while( morse[lastPos] == ' ' && morse[pos+1] == ' ' )
    {
      pos ++;
    }
  }
 
  return msg;
}
      
