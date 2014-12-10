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

    int numX = 50;
    int numY = 50;

    float spaceX = ofGetWidth() / (numX + 1);
    float spaceY = ofGetHeight() / (numY + 1);

    float cursorX = ofGetMouseX();
    float cursorY = ofGetMouseY();

    for (int y = 0; y < numY; y++) 
    {
        for (int x = 0; x < numX; x++)
        {
            float xPosition = (x + 1) * spaceX;
            float yPosition = (y + 1) * spaceY;
            
            float adjustedX = cursorX - xPosition;
            float adjustedY = cursorY - yPosition;
            
            float angleRadians = atan2(adjustedY, adjustedX);
            
            ofPushMatrix();
            ofTranslate(xPosition, yPosition);
            ofRotateZ(ofRadToDeg(angleRadians));
            
            ofLine(0, 0, 10, 0);            
            // ofEllipse(0, 0, 80, 80);
            
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

