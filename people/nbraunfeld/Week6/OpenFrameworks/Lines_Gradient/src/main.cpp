#line 1 "lines_gradient"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "lines_gradient"

void setup() 
{
    
   
	ofSetFullscreen(true);

}

void draw() 
{
    ofBackground(255,255,255);
    ofFill();
    int lineWidth = ofGetWindowWidth()/255;
    int lineHeight = ofGetWindowHeight();
    int numLines = 0;
	
    
    for(numLines = 0; numLines < 255; numLines++)
    {
        ofRect(lineWidth*numLines, 0, lineWidth, lineHeight);    
          
        ofSetColor(0,0,0,numLines);
    }  
    
   
    
   
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

