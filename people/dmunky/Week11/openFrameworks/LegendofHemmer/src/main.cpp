#line 1 "LegendofHemmer"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "LegendofHemmer"
ofImage link;
ofImage soldier;

void setup() {
    ofSetWindowShape(700,700);
 link.loadImage("link.png");
 soldier.loadImage("soldier.png");
}

void draw() {
    ofBackground(0,128,0);
    link.draw(ofGetMouseX()-50,ofGetMouseY()-50);
    
    int numX = 4;
    int numY = 4;
    
    float spaceX = ofGetWidth() / (numX + 1);
    float spaceY = ofGetHeight() / (numY + 1);
    
    float cursorX = ofGetMouseX();
    float cursorY = ofGetMouseY();
    
    for (int y = 0; y < numX; y++)
   {
    for (int x = 0; x < numY; x++)
    {
        float xPosition = (x + 1) * spaceX;
        float yPosition = (y + 1) * spaceY;
        
        float adjustedX = cursorX - xPosition;
        float adjustedY = cursorY - yPosition;
        
        float angleRadians = atan2(adjustedY, adjustedX);
        
        ofPushMatrix();
        ofTranslate(xPosition, yPosition);
        ofRotateZ(ofRadToDeg(angleRadians) - 90);
        
        soldier.draw(-soldier.getWidth() / 2, -soldier.getHeight() / 2);
        
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

