#line 1 "SolLewittDrawing"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SolLewittDrawing"
int x[50]; //create array of 50 x positions
int y[50]; //create array of 50 y positions
int xy[50]; //create a second array for each x and y position combined
bool print = false;


void setup() {
	// put your setup code here, to run once:
	ofBackground(255,255,255);
	ofSetWindowShape(1024, 768);
	ofSetWindowTitle("Sol LeWitt’s 1971 Wall Drawing for the School of the MFA Boston");
	ofSetFrameRate(60);
	
	for (int i = 0; i < 50; i++){ //loop through 50 x and y positions
		
		x[i] = ofRandom(0, 1024); //constrain x to width of window
		y[i] = ofRandom(0, 768); //constrain y to height of window
		ofSetColor(0,0,0); //set dot color to black
	    ofFill();		// draw filled shapes	
		ofCircle(x[i], y[i], 1); //use current int to draw dot with x and y
		
	}
	
}

void wallDrawing() {
	// put your main code here, to run once each frame:

	for (int i = 0; i < 50; i++){ //loop through 50 x and y positions
	    for (int xy = 0; xy < 50; xy++){ //for each point, loop through 50 other points to draw connections
	        ofLine(x[i], y[i], x[xy+1], y[xy+1]); //draw lines from the current point to the other 50 points
	    }
	}
}

void draw() {
    
    if (print) { //when "p" is pressed
    ofBeginSaveScreenAsPDF("SolLeWitt_1971_Wall_Drawing-"+ofGetTimestampString()+".pdf", false); //start screen capture
    }
    
    wallDrawing();
    
    if (print) {
        ofEndSaveScreenAsPDF();
        print = false;
    }    
    
}

void keyPressed(int key){
    if (key == 'p') {
        print = true;
    }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

