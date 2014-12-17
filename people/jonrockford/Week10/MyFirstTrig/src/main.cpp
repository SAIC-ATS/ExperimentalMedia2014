#line 1 "MyFirstTrig"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "MyFirstTrig"
float angleRad;
float radius;

ofVideoPlayer video;
ofImage image;

void setup() {
    ofSetWindowShape(800, 800);
    ofSetFrameRate(60);
	angleRad = 0;
	radius = 150;
	
	video.loadMovie("Train.mov");
	video.play();
	image.loadImage("Eye.jpg");
}

void update() { // a place to do all the calculations that don't require drawing to the screen - avoids confusion or weird artifacts that may be caused by the looping in the draw function
 
    video.update(); // asks the video for the latest pixels 
    
}

void draw() {
    ofBackground(0);
    
    angleRad = angleRad + ofDegToRad(0.1);
    
    float centerX = ofGetWidth() / 2;
    float centerY = ofGetHeight() / 2;
    
	float x = radius * cos(angleRad) + centerX;
    float y = radius * sin(angleRad) + centerY;
    
    ofSetColor(255, 255, 0);   
    ofLine(centerX, centerY, x, y);
    
	float mouseX = ofGetMouseX();
	float mouseY = ofGetMouseY();
	
	
	ofSetColor(255, 255, 255);
	ofLine(centerX, centerY, mouseX, mouseY);
// 	ofSetColor(255, 0, 255);
// 	ofCircle(mouseX, centerY, mouseY/3);
	
	ofSetColor(255, 255, 0);
	float mouseAngleRad = atan2(mouseY - centerY, 
	                        mouseX - centerX);
	ofPushMatrix();
	ofTranslate(centerX, centerY);
	ofRotateZ(ofRadToDeg(mouseAngleRad));
	image.draw(-image.getWidth() / 2, - image.getHeight() /2);
	ofSetColor(255);
	ofTranslate(mouseX - centerX, mouseY - centerY);
	video.draw(0, mouseY);
	
	
	ofPopMatrix();
	
	std::cout << ofRadToDeg(mouseAngleRad) << std::endl;
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

