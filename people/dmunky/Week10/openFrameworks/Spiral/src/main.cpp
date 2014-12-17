#line 1 "Spiral"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Spiral"
void setup() {
	// put your setup code here, to run once:
	ofSetWindowShape(600,600);
}

void draw() {
    
    float totalAngle = (360 * 10);
    float centerX = ofGetWidth() / 2;
    float centerY = ofGetHeight() / 2;
    
    float lastX = centerX;
    float lastY = centerY;
    
    for (float angle = 0; angle < totalAngle; angle += 1) //++ just adds 1, += ?  adds whatever value you want like 1.2, 100, 1000000
   { 
       
    float rX = ofMap(angle, 0, totalAngle, 0, ofGetWidth() / 2);
    float rY = ofMap(angle, 0, totalAngle, 0, ofGetWidth() / 2);
    
    float x = rX * cos(ofDegToRad(angle)) + centerX;
    float y = rY * sin(ofDegToRad(angle)) + centerY;
  
    ofLine(lastX, lastY, x, y);
    
    lastX = x;
    lastY = y;
   }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

