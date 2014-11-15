#line 1 "lines"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "lines"
void setup() {
   
	ofSetFullscreen(true);
	
}

void draw() {
    ofBackground(0);
    ofFill();
    int lineWidth = ofGetWindowWidth()/255;
    int lineHeight = ofGetWindowHeight();
    int numLines = 0;
    
    
    for(numLines = 1; numLines < 255; numLines++)
    {
        ofRect(lineWidth*numLines, 0, lineWidth, lineHeight);
        
        if(numLines % 2 == 1 )
        {
            ofSetColor(255,255,0);
        }
        
        else
        {
            ofSetColor(255,0,0);
        }
        
    }    
    
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

