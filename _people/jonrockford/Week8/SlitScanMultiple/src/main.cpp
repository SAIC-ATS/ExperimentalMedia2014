#line 1 "SlitScanMultiple"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SlitScanMultiple"
ofVideoGrabber grabber;
ofPixels pixels;
ofImage image;

int xPosition = 0;
int xPosition2 = 100;

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
            ofColor pixelFromGrabberB = grabber.getPixelsRef().getColor(grabber.getWidth() / 4, y);
            //pixels.setColor(xPosition, y, pixelFromGrabber);
            pixels.setColor(xPosition, y, pixelFromGrabber);
            pixels.setColor(xPosition2, y, pixelFromGrabberB);
            
        }
        
        
        
        image.setFromPixels(pixels);
        xPosition = ofGetMouseX();
        xPosition2 = ofGetMouseX() + 100;
        //xPosition++;
        
        if (xPosition > pixels.getWidth())
        {
            xPosition = 0;   
        }
        
        if (xPosition2 > pixels.getWidth())
        {
            xPosition2 = 0;
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

