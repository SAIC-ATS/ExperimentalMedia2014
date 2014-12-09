#line 1 "A_4"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "A_4"
ofSerial mySerial; bool   oneShot; int potValue = 0; int alpha;  int width, height; int numPoints;int circleX[100]; int circleY[100]; int r[100]; int g[100]; int b[100]; void setup() {    ofSetWindowShape(400, 400);    ofBackground(250, 0, potValue);    ofEnableAlphaBlending();     ofSetFrameRate(1);    width = ofGetWindowWidth(); height = ofGetWindowHeight();    mySerial.setup(0, 9600);        numPoints = 100;     alpha = 40;     oneShot =false; }void draw() {    for( int i = 0; i <50; i++) {     circleX[i]= ofRandom(width); circleY[i]= ofRandom(height); r[i] = ofRandom(100, 255); g[i] = ofRandom(100, 150); b[i] = ofRandom(50, 200); }  for( int i = 0; i < numPoints; i++ ) {  for (int j = 1; j < numPoints; j++){ofSetColor(r[i], g[i], b[i], alpha);ofCircle( circleX[i], circleY[i], 10); ofLine(circleX[i], circleY[i], circleX[j], circleY[j]); }}}void keyPressed(int key) { if(' ' == key) { for ( int i = 0; i < numPoints; i++) {  r[i] = ofRandom(150); g[i] = ofRandom(150); b[i] = ofRandom(150); } } } 

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

