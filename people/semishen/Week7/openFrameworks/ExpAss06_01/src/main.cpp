#line 1 "ExpAss06_01"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "ExpAss06_01"
ofColor color;
int colorSize;

void setup() 
{
	ofSetWindowShape(255,255);
	ofSetFrameRate(60);
	ofBackground(255);
	
    colorSize = 256;
}

void draw() 
{
    for(int i = 0; i < colorSize; i++)
    {
        color = ofColor(255,0,0);
        color.setHue(i);
        ofSetColor(color);
        // ofNoFill();
        // ofSetLineWidth(0.1);
	    ofLine(i,0,i,64);
	    
	    if (i % 2 == 0)
	    {
	        ofSetColor(255,0,0);
	        
	    }
	    else 
	    {
	        ofSetColor(255,255,0);
	        
	    }
	    ofLine(i,64,i,128);   
	    
	    color = ofColor(0,0,255);
        color.setBrightness(255-i);
        ofSetColor(color);
        // ofNoFill();
        // ofSetLineWidth(0.1);
	    ofLine(i,128,i,192);
	    
	    color = ofColor(0,0,255);
        color.setSaturation(i);
        ofSetColor(color);
        // ofNoFill();
        // ofSetLineWidth(0.1);
	    ofLine(i,192,i,255);
    }
    
    
    
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

