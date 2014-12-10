#line 1 "Sol_Lewitt_Scratch"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Sol_Lewitt_Scratch"
bool oneShot; //make boolean value, only has 2 states, true or false
bool checker;

int alpha; //integer variables
int width, height;
int circleX[50];
int circleY[50];
int numPoints;



void setup() {
    ofSetWindowShape(800, 800); //window size
    ofBackground(120, 120, 120); //bg color
    ofEnableAlphaBlending(); //for transparencies
    ofSetFrameRate(60);  //set frame rate
    numPoints = 50;
    alpha = 120;
    width = ofGetWindowWidth();
    height = ofGetWindowHeight();
    oneShot = false;
    //ofSetBackgroundAuto(false);
    
 for (int i = 0; i < numPoints; i++) {
    circleX[i] = ofRandom(width);
    circleY[i] = ofRandom(height);
    }
}


void draw() {
    
    if(oneShot){
        ofBeginSaveScreenAsPDF("myPDF"+ofGetTimestampString()+".pdf", false);
    }

    ofSetColor(0,0,0, alpha);
    
    for (int i = 0; i < numPoints; i++) {
         //ofLogNotice("draw a new circle") << i;
         
        ofCircle(circleX[i], circleY[i], 10);
        
        for(int j = 0; j < 50; j++) {
        ofLine(circleX[i], circleY[i], circleX[j], circleY[j]);
        }
    }

    
    if(oneShot){
        ofEndSaveScreenAsPDF();
        oneShot = false;
    }
        
  // ofLogNotice("some text") << ofGetWindowWidth() <<(", ") << ofGetWindowHeight();
}


void keyPressed(int key)
{
    if('s' == key)
    {
        oneShot = true;
        ofLogNotice("The S key was pressed") << oneShot;
    } 
    
     if (' ' == key){
         for ( int i = 0; i < numPoints; i++){
        circleX[i] = ofRandom(width);
         circleY[i]= ofRandom(height);
        }
    }
  }


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

