#line 1 "3potProgram"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "3potProgram"
ofSerial mySerial;

std::string potBuffer;


int x = 0;
int y = 0;
int z = 0;

void setup() 
{	
	mySerial.setup(0,9600); 
	ofSetFullscreen(true);
	ofSetBackgroundColor(0);
	ofSetBackgroundAuto(false);
}

void draw() 
{
    
    // ofEnableDepthTest();
   
    
    while(mySerial.available() > 0)
    {
        // pots += mySerial.readByte();
        int myByte = mySerial.readByte();
        
        if(myByte == '/n')
        {
          std::vector <std::string> xyzValues = ofSplitString(potBuffer, ",");  
          
          if(xyzValues.size() == 3)
          {
            x = ofToInt(xyzValues[0]);
            y = ofToInt(xyzValues[1]);
            z = ofToInt(xyzValues[2]);    
          }
          
          else
          { 
          }
          
          potBuffer.clear();
          
        }
        
        else
        {
           potBuffer =+ (myByte); 
        }
        
    }
    
    

    
    ofCircle(x,y,z,3);
    ofFill();
    ofSetColor(0,ofRandom(0,125), ofRandom(100,200), ofRandom (25,100));
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

