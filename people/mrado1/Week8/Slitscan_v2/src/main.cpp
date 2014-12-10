#line 1 "Slitscan_v2"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Slitscan_v2"
ofVideoGrabber grabber;
ofPixels pixels1;
ofPixels pixels2;
ofPixels pixels3;
ofImage slit1;
ofImage slit2;
ofImage slit3;

int xPosition = 0;
int mouseX;

void setup() {
    ofSetWindowShape(1280, 720);
    ofBackground(255);
    grabber.initGrabber(ofGetWidth(), ofGetHeight());
    pixels1.allocate(ofGetWidth()/3, ofGetHeight(), OF_PIXELS_RGBA);
    pixels2.allocate(ofGetWidth()/3, ofGetHeight(), OF_PIXELS_RGBA);
    pixels3.allocate(ofGetWidth()/3, ofGetHeight(), OF_PIXELS_RGBA);
	
}


void update() {
    grabber.update();
    
    if (grabber.isFrameNew())
    {
        for (int y = 0; y < grabber.getHeight(); y++)
        {
            ofColor pixelFromGrabber = grabber.getPixelsRef().getColor(mouseX, y);
            
            pixels1.setColor(xPosition, y, pixelFromGrabber);
            pixels2.setColor(xPosition, y, pixelFromGrabber);
            pixels3.setColor(xPosition, y, pixelFromGrabber);
        }
        
        slit1.setFromPixels(pixels1);
        slit2.setFromPixels(pixels2);
        slit3.setFromPixels(pixels3);

        xPosition++;
        
        if (xPosition > pixels1.getWidth())
        {
            xPosition = 0;   
        }
    }
}

void draw() {
// 	grabber.draw(0, 0);
    mouseX = ofGetMouseX();
    slit1.draw(0, 0);
    slit2.draw(ofGetWidth()/3, 0);
    slit3.draw(ofGetWidth()/3*2, 0);
	
}

// void keyPressed(int key){
//     if (key == 'p') {
//         print = true;
//     }
    
//     if (key == ' ') {
//         ofBackground(255);
//         getValues();
//     }
// }

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

