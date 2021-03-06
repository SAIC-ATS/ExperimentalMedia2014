#line 1 "RotatingGrid"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "RotatingGrid"
ofImage image;
float numImages;
float angleRad;

int pointX[25];
int pointY[25];
int width;
int height;
int scaleX;
int scaleY;


void setup() {
	image.loadImage("Eye.jpg");
// 	pointX = 25;
// 	pointY = 25;
	
	ofSetVerticalSync(true);
    
    // Set the window size.
    ofSetWindowShape(500, 500);
    
    // Set the background color.
    ofBackground(0);
    width = ofGetWindowWidth();
    height = ofGetWindowHeight();
    scaleX = scaleX + 100;
    scaleY = scaleY + 250;
    numImages = 250;
    
    // for ( int i = 0; i < numImages; i++) {
    //     pointX[i] <= width;
    //     pointY[i] <= height;
//}

}
    
void draw() {
    
    
    for (int i = 0; i <= numImages; i++) {
     if (scaleX >= ofGetWindowWidth()) {
        scaleX = 0;
    }
    if (scaleY >= ofGetWindowHeight()) {
        scaleY = 0;
    } 
          
    ofPushMatrix();  
    angleRad = angleRad + ofDegToRad(0.1);
    
    float centerX = ofGetWidth() - pointX[i] - scaleX;
    float centerY = ofGetHeight() - pointY[i] - scaleY;
    
    float mouseX = ofGetMouseX();
	float mouseY = ofGetMouseY();
	
    
 	float mouseAngleRad = atan2(mouseY - centerY, 
	                        mouseX - centerX);
	
	ofTranslate(centerX, centerY);
	ofRotateZ(ofRadToDeg(mouseAngleRad));
	image.draw(-image.getWidth() / 2, - image.getHeight() /2);
	ofPopMatrix();
    }
      
    
	
// 	float centerX1 = ofGetWidth() - 400;
//     float centerY1 = ofGetHeight() - 400;
//     ofPushMatrix();
//  	float mouseAngleRad1 = atan2(mouseY - centerY1, 
// 	                        mouseX - centerX1);
	
// 	ofTranslate(centerX1, centerY1);
// 	ofRotateZ(ofRadToDeg(mouseAngleRad1));
// 	image.draw(-image.getWidth() / 2, - image.getHeight() /2);
// 	ofPopMatrix();
	
// 	float centerX2 = ofGetWidth() - 100;
//     float centerY2 = ofGetHeight() - 100;
//     ofPushMatrix();
//  	float mouseAngleRad2 = atan2(mouseY - centerY2, 
// 	                        mouseX - centerX2);
	
// 	ofTranslate(centerX2, centerY2);
// 	ofRotateZ(ofRadToDeg(mouseAngleRad2));
// 	image.draw(-image.getWidth()/2, -image.getHeight()/2);
// 	ofPopMatrix();
	
// 	float centerX3 = ofGetWidth() - 100;
//     float centerY3 = ofGetHeight() - 400;
//     ofPushMatrix();
//  	float mouseAngleRad3 = atan2(mouseY - centerY3, 
// 	                        mouseX - centerX3);
	
// 	ofTranslate(centerX3, centerY3);
// 	ofRotateZ(ofRadToDeg(mouseAngleRad3));
// 	image.draw(-image.getWidth()/2, -image.getHeight()/2);
// 	ofPopMatrix();
	
// 	float centerX4 = ofGetWidth() - 250;
//     float centerY4 = ofGetHeight() - 100;
//     ofPushMatrix();
//  	float mouseAngleRad4 = atan2(mouseY - centerY4, 
// 	                        mouseX - centerX4);
	
// 	ofTranslate(centerX4, centerY4);
// 	ofRotateZ(ofRadToDeg(mouseAngleRad4));
// 	image.draw(-image.getWidth()/2, -image.getHeight()/2);
// 	ofPopMatrix();
	
// 	float centerX5 = ofGetWidth() - 100;
//     float centerY5 = ofGetHeight() - 250;
//     ofPushMatrix();
//  	float mouseAngleRad5 = atan2(mouseY - centerY5, 
// 	                        mouseX - centerX5);
	
// 	ofTranslate(centerX5, centerY5);
// 	ofRotateZ(ofRadToDeg(mouseAngleRad5));
// 	image.draw(-image.getWidth()/2, -image.getHeight()/2);
// 	ofPopMatrix();
	
// 	float centerX6 = ofGetWidth() - 400;
//     float centerY6 = ofGetHeight() - 250;
//     ofPushMatrix();
//  	float mouseAngleRad6 = atan2(mouseY - centerY6, 
// 	                        mouseX - centerX6);
	
// 	ofTranslate(centerX6, centerY6);
// 	ofRotateZ(ofRadToDeg(mouseAngleRad6));
// 	image.draw(-image.getWidth()/2, -image.getHeight()/2);
// 	ofPopMatrix();
    //}


	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

