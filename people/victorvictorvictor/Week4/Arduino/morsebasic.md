// What hath God wrought

//.-- .... .- -
//.... .- - ....
//--. --- -..
//.-- .-. --- ..- --. .... -

int led = 13;

void setup () { pinMode(led, OUTPUT); }

void dits() { digitalWrite(led, HIGH); delay(1000); digitalWrite(led, LOW); delay(1000); }

void dahs() { digitalWrite(led, HIGH); delay(3000); digitalWrite(led, LOW); delay(1000); }

void letterA() { dits(); dahs(); }

void letterD() { dahs(); dits(); dits(); }

void letterG() { dahs(); dahs(); dits(); }

void letterH() { dits(); dits(); dits(); dits(); }

void letterO() { dahs(); dahs(); dahs(); }

void letterR() { dits(); dahs(); dits(); }

void letterT() { dits(); dits(); dits(); dits(); }

void letterU() { dits(); dits(); dahs(); }

void letterW() { dits(); dahs(); dahs(); }

void loop() { 

letterW(); letterH(); letterA(); letterT(); 
delay(3000); 

letterH(); letterA(); letterT(); letterH(); 
delay(3000); 

letterG(); letterO(); letterD(); 
delay(3000); 

letterW(); letterR(); letterO(); letterU(); letterG(); letterH(); letterT();
delay(10000); 
}
