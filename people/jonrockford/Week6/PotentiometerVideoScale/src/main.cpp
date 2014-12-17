#line 1 "PotentiometerVideo"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "PotentiometerVideo"
ofImage image; // declare the image

ofVideoPlayer video;
ofVideoGrabber grabber;
ofSerial serial;
float data = 0;


void setup() {
    ofSetWindowShape(1280, 720);
    serial.setup(0, 9600);
    video.loadMovie("Train.mov"); //load the video file
	
	video.play();
	
}

void update() { // a place to do all the calculations that don't require drawing to the screen - avoids confusion or weird artifacts that may be caused by the looping in the draw function
 
    video.update(); // asks the video for the latest pixels 
    
}

void draw() {
	
	
	if (serial.available()) {
	       data = serial.readByte();
	       serial.flush();
    }
	
	
	video.draw(0,0, data*10, data*6);
	
	
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

