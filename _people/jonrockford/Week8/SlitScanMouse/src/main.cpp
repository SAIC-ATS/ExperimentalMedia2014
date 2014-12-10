#line 1 "SlitScanMouse"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SlitScanMouse"
ofVideoGrabber grabber;
ofPixels pixels;
ofImage image;

int xPosition = 0;

void setup() {
    ofSetWindowShape(1280, 720);
    grabber.initGrabber(1280, 720);
    pixels.allocate(720, 720, OF_PIXELS_RGBA);
	
}


void update() {
    grabber.update();
    
    
    if (grabber.isFrameNew())
    {
        for (int y = 0; y < grabber.getHeight(); y++)
        {
            ofColor pixelFromGrabber = grabber.getPixelsRef().getColor(grabber.getWidth() / 2, y);
            
            pixels.setColor(xPosition, y, pixelFromGrabber);
        }
        
        image.setFromPixels(pixels);
        
        xPosition = ofGetMouseX();
        //xPosition++;
        
        if (xPosition > pixels.getWidth())
        {
            //xPosition = 0;   
        }
    }
}

void draw() {
 	//grabber.draw(0, 0);
    image.draw(0, 0);
    
    float fps = ofGetFrameRate();
    string stringFps = ofToString(fps);
    ofDrawBitmapString(stringFps, 0, 10);
	
}

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

