#line 1 "Spiral"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Spiral"
// Draw a spiral starting at the center of the screen that always makes 10 revolutions extending to the full width and height of the screen

// Variables for width and height of the screen
// Set screen dimensions, background color, line color, line width 
// Create a Polyline that starts at the center of the screen 
// Create a for loop that adds vertices to the polyline, based on the angle around the center, adding a base increment to each 

// int w;
// int h;
// float angleRad;
// float xRadius;
// float yRadius;

void setup() {
// 	w = 1000;
// 	h = 600;
	ofSetWindowShape(1000, 600);
	ofSetFrameRate(60);
// 	angleRad = 0;
// 	xRadius = w/10;
// 	yRadius = h/10;
	
}

void draw() {
	ofBackground(0);
    ofSetLineWidth(2.0);  // Line widths apply to polylines
    ofSetColor(255,255,0);

    ofPolyline spiral;

    float centerX = ofGetWidth() / 2; // create center X point
	float centerY = ofGetHeight() / 2; // create center Y point
	spiral.curveTo(centerX, centerY);

    for (float angle = 0; angle < (360*10); angle++) {
    	        	    
    	   // float xRadius = ofMap(angle, 0, 10*360, 0, ofGetWidth() / 2);
    	   // float yRadius = ofMap(angle, 0, 10*360, 0, ofGetHeight() / 2);
    	    float xRadius = (ofMap(angle, 0, 10*360, 0, ofGetWidth() / 2)*1.618);
    	    float yRadius = (ofMap(angle, 0, 10*360, 0, ofGetHeight() / 2)*1.618);
    	    
    	    float x = xRadius * cos(ofDegToRad(angle)) + centerX;
    	    float y = yRadius * sin(ofDegToRad(angle)) + centerY;
    	    
    	    cout << angle << endl;
    	   // cout << y << " = " << yRadius << " * " << cos(angleRad) << " + " << centerY << endl;
    	    
    	    spiral.curveTo(x, y);
	}

    spiral.draw();
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

