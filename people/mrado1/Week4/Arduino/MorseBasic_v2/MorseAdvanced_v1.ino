// Morse Code Program to write "What hath God Wrought"

const int LED = 13; //Led connected to digital pin 13

int character = 100; // pause between character components (_) is 1 unit

void setup()
{
  pinMode(LED, OUTPUT); // sets the digital pin as output
}

void dah()  // length of dahs (-) is 3 units
{
  digitalWrite(LED, HIGH);
  delay(300);
  digitalWrite(LED, LOW);
  delay(character);
}

void dit()  // length of dits (.) is 1 units
{
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(character);
}

void pause()  // pause between characters is 1 unit
{
  delay(300);
}

void space()  // pause between characters is 1 unit
{
  delay(700);
}

void loop()
{
  dit(); dah(); dah(); pause();         // W .--
  dit(); dit(); dit(); dit(); pause();  // h ....
  dit(); dah(); pause();                // a .-
  dah(); pause();                       // t -
  space();
  
  dit(); dit(); dit(); dit(); pause();  // h ....
  dit(); dah(); pause();                // a .-
  dah(); pause();                       // t -
  dit(); dit(); dit(); dit(); pause();  // h ....
  space();
  
  dah(); dah(); dit(); pause();         // G --.
  dah(); dah(); dah(); pause();         // o ---
  dah(); dit(); dit(); pause();         // d -..
  space();
  
  dit(); dah(); dah(); pause();         // w .--
  dit(); dah(); dit(); pause();         // r .-.
  dah(); dah(); dah(); pause();         // o ---
  dit(); dit(); dah(); pause();         // u ..-
  dah(); dah(); dit(); pause();         // g --.
  dit(); dit(); dit(); pause();         // h ....
  dah(); pause();                       // t -__
  space();
}
