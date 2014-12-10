#line 1 "Sol_LeWitt_Spacebar"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Sol_LeWitt_Spacebar"
/*“On a wall surface, any
continuous stretch of wall,
using a hard pencil, place
fifty points at random.
The points should be evenly
distributed over the area
of the wall. All of the
points should be connected
by straight lines. “*/

# define points 50

float pointX[points]; // defining for later use for X axis
float pointY[points]; // defining for later use for Y axis
float pointR[points]; // defining for later use for Radius

float data = 0;


void setup() {
    
	ofSetWindowShape(1024, 768);
	//ofSetCircleResolution(5);
	ofBackground(255,255,255);
	ofSetWindowTitle("Sol LeWitt Spacebar");
	
	for(int i=data; i<points; i++) {
	    pointX[i] = ofRandom(0, (ofGetWidth() -15)); // randomly establishes x axis of the points
	    pointY[i] = ofRandom(0, (ofGetHeight() -15)); // randomly establishes y axis of the points
	    pointR[i] = 3; // sets the diameter of the points	
    }
}

void draw() {
   
    for(int i=data; i<points; i++)
        {
        	ofSetColor(255,130,0);
	        //float radius = 5;
	        ofFill();		// draw "filled shapes"
	        ofCircle(pointX[i], pointY[i], pointR[i]);
	        
	   for(int v=i++; v<points; v++) {
	       ofLine(pointX[i], pointY[i], pointX[v], pointY[v]);
	     }
	   }
}

void keyPressed(int key) {
    if (key == ' '){
       data = ofRandom(12);
    }
}

	
	


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

