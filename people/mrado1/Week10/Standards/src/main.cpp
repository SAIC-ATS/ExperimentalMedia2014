#line 1 "Standards"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Standards"
// Create for loop to create positions for 10 objects, divide window into 5 by x and y
// Draw 10 objects
// Calculate angle of object points to mouse x and y
// Rotate each object towards mouse x and y 

int w;
int h;
int xPosition;
int yPosition;

ofVec2f objects[25];


void setup() {
	// put your setup code here, to run once:
	w = 800;
	h = 600;
	ofBackground(0);
	ofSetWindowShape(w, h);
	
}

void draw() {
	// put your main code here, to run once each frame:
	
    int spaceX = ofGetWidth()/(objects[i] + 1);
    int spaceY = ofGetHeight()/(objects[i] + 1);
	
    for (int x = 0; x < objects; x++) {
        for (int y = 0; y < objects; y++) {
            
            xPosition = (x + 1) * spaceX;
            yPosition = (y + 1) * spaceY;
    
        	ofCircle(xPosition, yPosition, 5);
        	
    	}
    }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

