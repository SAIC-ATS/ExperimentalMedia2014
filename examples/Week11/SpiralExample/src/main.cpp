#line 1 "SpiralExample"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SpiralExample"
void setup() {
}

void draw() 
{	
	float totalAngle = (360 * 10);
	
    float centerX = ofGetWidth() / 2;
	float centerY = ofGetHeight() / 2;
	    
	float lastX = centerX;
	float lastY = centerY;
	
	for (float angle = 0;  angle < totalAngle; angle += 1)
	{
	    float rX = ofMap(angle, 0, totalAngle, 0, ofGetWidth() / 2);
	    float rY = ofMap(angle, 0, totalAngle, 0, ofGetHeight() / 2);
	    
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

