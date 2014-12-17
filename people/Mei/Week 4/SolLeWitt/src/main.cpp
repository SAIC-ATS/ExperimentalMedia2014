#line 1 "SolLeWitt"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SolLeWitt"
//place 50 points at random
//they should be evenly spaced along the wall
//they should all be connected by  straight lines

#define numPoints 50    //define number of points

float pointradius[numPoints]; 
float pointx[numPoints];
float pointy[numPoints];

bool oneShot = true;

void setup() {
    
    ofSetFullscreen(true);
    ofSetBackgroundColor(255,255,255);

    for (int i = 0; i < numPoints; i++) {
        
        pointx[i] = ofRandom(0, ofGetWidth());      
        pointy[i] = ofRandom(0, ofGetHeight());
        pointradius[i] = 3;     //size of point 
    
    }


}

void draw() {
    
    if ( oneShot ) {
    ofBeginSaveScreenAsPDF("sollewitt_mei.pdf");
    }
    
    for (int i = 0; i < numPoints; i++) {
    
    ofCircle(pointx[i], pointy[i], pointradius[i]);
    ofSetColor(0);
    
    for (int a = 0; a < numPoints; a++) {      //cycles through points and draws line 
        
        ofLine (pointx[i], pointy[i], pointx[a], pointy[a]);   
    }
     }
    
    if( oneShot )
    {
        ofEndSaveScreenAsPDF();
        oneShot = false;
        return;
    }
}



};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

