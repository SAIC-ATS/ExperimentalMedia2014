#line 1 "ExpAss10_Spiral"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "ExpAss10_Spiral"
ofVec2f point;
float radius;
int timer;

void setup() 
{
	ofSetWindowShape (640, 480);
	ofSetFrameRate (60);
	ofBackground(0);
	
	ofSetBackgroundAuto(false);
	
	// center the point
	point.set(ofGetWidth()/2, ofGetHeight()/2);
	radius = 0;
	timer = 0;
	
}

void update()
{
    timer++;
    float radStep = (ofGetHeight()/20);
    radius += radStep/360;
    point.x = ofGetWidth()/2 + sin(ofDegToRad(timer))*radius;
    point.y = ofGetHeight()/2 + cos(ofDegToRad(timer))*radius;
    if( radius > ofGetHeight()/2)
    {
       
        radius = 0;
    }
    
    
}

void draw() 
{
	ofSetColor(255);
	ofFill();
	ofCircle(point, 1);
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

