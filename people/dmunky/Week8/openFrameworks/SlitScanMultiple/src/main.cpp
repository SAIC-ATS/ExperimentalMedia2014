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

void setup() {
    ofSetWindowShape(720, 720);
    grabber.initGrabber(720, 720);
    pixels.allocate(720, 720, OF_PIXELS_RGBA);
}


void update() {
    grabber.update();
    if (grabber.isFrameNew())
    {
        for (int y = 0; y < grabber.getHeight(); y++)
        {
            ofColor pixelFromGrabber1 = grabber.getPixelsRef().getColor(grabber.getWidth() / 2, y); //center of screen
            ofColor pixelFromGrabber2 = grabber.getPixelsRef().getColor(grabber.getWidth() /3, y); //second position grabbed from 1/3rd of the width of screen
            ofColor pixelFromGrabber3 = grabber.getPixelsRef().getColor(grabber.getWidth()/3 * 2, y); //third position for other 1/3rd
            
            pixels.setColor(xPosition, y, pixelFromGrabber1);
            pixels.setColor(xPosition+grabber.getWidth() / 2, y, pixelFromGrabber2); //added 2nd grabbed slit
            pixels.setColor(xPosition+grabber.getWidth() /3, y, pixelFromGrabber3); //added 3rd grabbed slit
        }
        
        image.setFromPixels(pixels);
        
        xPosition++;
        
        if (xPosition > pixels.getWidth())
        {
            xPosition = 0;   
        }
    }

}
void draw() {
   // grabber.draw(0, 0);
    image.draw(0, 0);
    
}

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

