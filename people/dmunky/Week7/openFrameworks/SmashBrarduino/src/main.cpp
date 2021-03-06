#line 1 "SmashBrarduino"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SmashBrarduino"
ofSerial mySerial;
std::string myBuffer;

int mariohorizontal;
int mariovertical;
int masterhandvertical;

ofImage background;
ofImage mario;
ofImage masterhand;

void setup() {
    mySerial.setup(0, 9600);
	// put your setup code here, to run once:
	ofSetWindowShape(550, 400);
	background.loadImage("finaldestination.png");
	mario.loadImage("mariotransparent.png");
	masterhand.loadImage("masterhand.png");
}

void draw() {
    
	// put your main code here, to run once each frame:
	background.draw(0,0);
    float mappedmariohorizontal = ofMap(mariohorizontal, 0, 255, 0, 500);
    float mappedmariovertical = ofMap(mariovertical, 0, 255, 0, 300);
    float mappedmasterhandvertical = ofMap(masterhandvertical, 0, 255, 0, 300);
    
	ofEnableAlphaBlending();
	float wave = sin(ofGetElapsedTimef());
    masterhand.draw(250 + (wave * 100), mappedmasterhandvertical);
    ofDisableAlphaBlending();
    
	ofEnableAlphaBlending();
    mario.draw(mappedmariohorizontal, mappedmariovertical + (wave * 50));
    ofDisableAlphaBlending();
     //look at each incoming byte until no more are available to look at.
	while (mySerial.available() > 0)
	{
	    //Read the current byte and set it equal to "myByte".
	   int myByte = mySerial.readByte();
	   
	   //Look at "myByte" and see if it is equal to the new line character.
	   if (myByte == '\n')
	   {
	        std::cout << myBuffer << std::endl;
	        
	    //if we find a new line or \n, then we will split the string and parse it into our variables   
	        std::vector<std::string> myTokens = ofSplitString(myBuffer, ",");
	        //original: std::vector<std::string> myTokens = ofSplitString(myBuffer, ",");
	        
	        if (myTokens.size() == 3)
	        {
	            //we have the right number of tokens so we can move forward
	            mariohorizontal = ofToInt(myTokens[0]);
	            mariovertical = ofToInt(myTokens[1]);
	            masterhandvertical = ofToInt(myTokens[2]);
	        }
	        
	        else
	        { 
	            //we have the wrong number of tokens so we won't parse them.myBuffer
	          
	        }
	          myBuffer.clear();  
	   }
	   else
	    {
	    myBuffer += myByte; //if it is not a new line, then save the character for later
        }
	}
   
}




};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

