#line 1 "RotatingEyesCircles"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "RotatingEyesCircles"
ofImage image;
float numImages;
float angleRad;



void setup() {
	image.loadImage("Eye.jpg");
	numImages = 25;
	
	ofSetVerticalSync(true);
    
    // Set the window size.
    ofSetWindowShape(500, 500);
    
    // Set the background color.
    ofBackground(0);
}


    
void draw() {
    for ( int i = 0; i < numImages; i++) {
    angleRad = angleRad + ofDegToRad(0.1);
    
    float centerX = ofGetWidth() / 2;
    float centerY = ofGetHeight() / 2;
    
    float mouseX = ofGetMouseX();
	float mouseY = ofGetMouseY();
	
    ofPushMatrix();
 	float mouseAngleRad = atan2(mouseY - centerY, 
	                        mouseX - centerX);
	ofPushMatrix();
	ofTranslate(centerX, centerY);
	ofRotateZ(ofRadToDeg(mouseAngleRad));
	image.draw(-image.getWidth() / 2, - image.getHeight() /2);
    }
    
    // ofRotate(ofGetMouseX(), 0, 0, 0);
    // image.draw(25, 25);
    // ofPopMatrix();

	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

