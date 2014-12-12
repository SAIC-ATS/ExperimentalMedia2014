#line 1 "Assignment_4"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Assignment_4"
// What do int, long, short and byte have in common? How are they different?
// What do float and double have in common? How are they different?
// What does the unsigned mean when used with int, long, short and byte?
// What is the function of the void setup() function in both openFrameworks and Arduino?
// What is the function of the void loop() in Arduino and void draw() in openFrameworks?
// What is a preprocessor?
// What is a compiler?
// What is a linker?
// What is an IDE?
// What programming language forms the foundation of both Arduino and openFrameworks? Who invented the language and when?


int width, height;
int xValues[50];
int yValues[50];

bool oneShot;


void setup() {

	ofBackground(0,0,0);
	ofSetWindowShape(600,600);
	ofEnableAlphaBlending();
	
	oneShot = true; 
	
	width = ofGetWindowWidth();
	height = ofGetWindowHeight();
	
	for(int a = 0; a < 50; a++) {
	    xValues[a] = ofRandom(width);
	    yValues[a] = ofRandom(height);
	}
	
	ofSetColor(255);
	ofFill();
	
}

void draw() {
    
    if( oneShot ){
        ofBeginSaveScreenAsPDF("asdgasfkjhsgf.pdf");
    }

    for(int a = 0; a < 50; a++) {
        
        for(int b = 0; b < 50; b++) {
            ofSetColor(255,0,120, 120);
            ofEllipse(xValues[b], yValues[b], 12, 12);  
            
            ofSetColor(255);
            ofLine(xValues[a], yValues[a], xValues[b], yValues[b]);
        }
    }
    if( oneShot ){
        ofEndSaveScreenAsPDF();
        oneShot = false;
    
}
}

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

