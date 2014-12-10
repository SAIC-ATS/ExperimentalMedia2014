#line 1 "WhiteToBlack"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "WhiteToBlack"
void setup() {
	// put your setup code here, to run once:
	ofSetColor(255,255,255);
	ofSetWindowShape(255,255);
    }

void draw() {
    for (int i = 0, g = 255; i < 255, g > 0; i++, g=g-1){
    ofSetColor(i, i, i);
    ofLine(g, 0, g, 255);
    }
    
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

