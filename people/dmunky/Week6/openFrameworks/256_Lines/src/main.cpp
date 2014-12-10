#line 1 "256_Lines"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "256_Lines"
void setup() {
	// put your setup code here, to run once:
	ofSetColor(255,255,255);
	ofSetWindowShape(255,255);
}

void draw() {
    for (int i = 0; i < 255; i ++) {
ofSetColor(255, 0, 0); //red
if (i % 2 == 2 || 4){ //remainder of division of operator
  ofLine(i*2, 0, i*2, 255);
}
ofSetColor(255, 255, 0); //yellow
if (i % 2 == 1){  //remainder of division of operator
ofLine(i*2, 0, i*2, 255);
}
}
}

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

