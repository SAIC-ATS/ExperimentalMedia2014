#line 1 "Assignment6_gradient2"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Assignment6_gradient2"
// What is a std::vector?
// What is does an if - else - statement do?
// What does a switch statement do?
// What does a for loop do and how does it differ from a while loop?
// What is a modulo operator (%) and how do you use it?
// In Arduino, what is the difference between Serial.write() and Serial.print().
// What is “Object-Oriented” Programming?
#define y 256
float rect[y];
void setup() {
	// put your setup code here, to run once:
		ofSetWindowShape(400, 400);
		
}


void draw() {
    ofBackground(255);
    
	
	for(int x = 255; x >= 0; x--) {
	    
	    ofSetColor(x);
        ofRect(((255-x)*(ofGetWidth()/y)), 0, ((255-x)*(ofGetWidth()/y)), ofGetHeight());   
	}
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

