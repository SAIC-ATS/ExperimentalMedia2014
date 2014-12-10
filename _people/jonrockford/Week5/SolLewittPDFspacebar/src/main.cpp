#line 1 "SolLewittPDFspacebar"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SolLewittPDFspacebar"
/*“On a wall surface, any
continuous stretch of wall,
using a hard pencil, place
fifty points at random.
The points should be evenly
distributed over the area
of the wall. All of the
points should be connected
by straight lines. “*/


bool oneShot;
# define points 50

float pointX[points]; // defining for later use for X axis
float pointY[points]; // defining for later use for Y axis
float pointR[points]; // defining for later use for Radius

int dotX, dotY;
int r[points];
int g[points];
int b[points];


void setup() {
    ofSetWindowShape(1024, 768);
    dotX = ofGetWindowWidth();
    dotY = ofGetWindowHeight();
	
	//ofSetCircleResolution(5);
	ofBackground(120, 120, 120);
	ofSetWindowTitle("Sol LeWitt");
	
	for(int i=0; i<points; i++) {
	    pointX[i] = ofRandom(dotX); // randomly establishes x axis of the points
	    pointY[i] = ofRandom(dotY); // randomly establishes y axis of the points
	    pointR[i] = 3; // sets the diameter of the points
	    r[i] = ofRandom(255);
        g[i] = ofRandom(255);
        b[i] = ofRandom(255);
    }
}

void draw() {
    
    if( oneShot ){
        ofBeginSaveScreenAsPDF("SolLewittPDF-"+ofGetTimestampString()+".pdf", false);
    }
    for(int i=0; i<points; i++)
        {
        	ofSetColor(r[i], g[i], b[i]);
	        //float radius = 5;
	        ofFill();		// draw "filled shapes"
	        ofCircle(pointX[i], pointY[i], pointR[i]);
	        
	   for(int v=i++; v<points; v++) {
	       ofLine(pointX[i], pointY[i], pointX[v], pointY[v]);
	   }
        }
	   if( oneShot ){
	       ofEndSaveScreenAsPDF();
	       oneShot = false;
	   }

}
    
void keyPressed(int key)
{
    if('s' == key)
    {
        oneShot = true;
       // ofLogNotice("The S key was pressed") << oneShot;
    }
    if(' ' == key) {
        for ( int i = 0; i <= points; i++) {
        pointX[i] = ofRandom(dotX); // randomly establishes x axis of the points
	    pointY[i] = ofRandom(dotY); // randomly establishes y axis of the points
	    r[i] = ofRandom(255);
        g[i] = ofRandom(255);
        b[i] = ofRandom(255);
        }
	    
    }
    }
   
         

	
	


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

