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

    int numX = 10;
    int numY = 10;

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
            
            float distance = ofDist(xPosition, yPosition, cursorX, cursorY);
            
            float variation = ofMap(distance, 0, 1131.370849898476, 60, 0);
            
            int opacity = ofMap(distance, 0, 1131.370849898476, 255, 0);
            
                ofPushMatrix();
                
                ofTranslate(xPosition, yPosition);
                ofRotateZ(ofRadToDeg(angleRadians) + (ofRandom(0.0, variation)));
                ofSetCircleResolution(3);
                // ofLine(0, 0, 20, 0);
                ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), opacity);
                ofCircle(0, 0, 20);
                
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

