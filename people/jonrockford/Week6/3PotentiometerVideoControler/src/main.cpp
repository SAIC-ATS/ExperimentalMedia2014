#line 1 "3PotentiometerVideo"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "3PotentiometerVideo"
ofSerial mySerial;
ofVideoPlayer video;
std::string myBuffer; //std means standard; it's a C++ thing
int H = 0;
int W = 0;
int S = 0;

void setup() {
    ofSetWindowShape(1280, 720);
    mySerial.setup(0, 9600);
    video.loadMovie("Train.mov"); //load the video file
	
	video.play();
	
}

void update() { // a place to do all the calculations that don't require drawing to the screen - avoids confusion or weird artifacts that may be caused by the looping in the draw function
 
    video.update(); // asks the video for the latest pixels 
    
}

void draw() {
	
	video.draw(0,0,H*10, W*6);
	video.setSpeed(S/20);
	
	
	// Look at each incoming byte until no more are avaialble to look at.
	while (mySerial.available() >0)
	{
	    // Read the current byte and set it equal to "myByte"
	    int myByte = mySerial.readByte();
	    
	    // Look at "myByte" and see if it is equal to the new line character.
	    if (myByte == '\n')
	    {
	        std::cout << myBuffer << std::endl;
	        // split the string and parse it into our variables
	        std::vector<std::string> myTokens = ofSplitString(myBuffer, ",");
	        
	        if (myTokens.size() == 3)
	        {
	            // we have the right number of tokens, so we can move forward
	            H = ofToInt (myTokens[0]) / 4;
	            W = ofToInt (myTokens[1]) / 4;
	            S = ofToInt (myTokens[2]) / 4;
	        }
	        else{
	            // we have the wrong number of tokens, so we won't parse them   
	        }
	        
	        myBuffer.clear();
	        
	    }
	    else
	    {
	        // if it is not a new line, then save the character for later
	        myBuffer += myByte;
	        
	        
	    }
	    
	}
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

