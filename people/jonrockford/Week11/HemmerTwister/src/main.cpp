#line 1 "HemmerTwister"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "HemmerTwister"
void setup() {
	ofSetWindowShape(800, 800);
	
	
}

void draw() {
	ofBackground(0);
	
	int numX = 5;
	int numY = 5;
	
	float spaceX = ofGetWidth() / (numX + 1); // centers each based on width
	float spaceY = ofGetHeight() / (numY + 1); // centers each based on height
	
	float cursorX = ofGetMouseX();
	float cursorY = ofGetMouseY();
	
	for (int y = 0; y < numY; y++) {
	
	    for (int x = 0; x < numX; x++) {
	        
	        float xPosition = (x + 1) * spaceX;
	        float yPosition = (y + 1) * spaceY;
	        
	        float adjustedX = cursorX - xPosition;
	        float adjustedY = cursorY - yPosition;
	        
	        ofVec2f p1(cursorX, cursorY);
            ofVec2f p2(xPosition, yPosition);
	        float distance = p1.distance( p2 );
	        
	        float angleRadians = atan2(adjustedY, adjustedX);
	        
	        ofPushMatrix();
	        ofTranslate(xPosition, yPosition);
	        ofRotateZ(ofRadToDeg(angleRadians));
	        ofLine(0, 0, distance - 12, 0);
	        ofEllipse(0, 0, 80, 80);
	       
	        ofSetColor(distance , distance *12, distance* 12);
	        ofPopMatrix();
	        
	        
	    
	    }
	}
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

