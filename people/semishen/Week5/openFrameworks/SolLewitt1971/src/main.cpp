#line 1 "SolLewitt1971"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SolLewitt1971"
vector<float> xPos;
vector<float> yPos;    
int radius;

bool oneShot;

void setup() {
	// put your setup code here, to run once:
	ofSetWindowShape(800, 800);
	ofBackground(0);
	ofSetWindowTitle("SolLewitt1971");
	ofSetFrameRate(60);
	
	xPos.resize(50);
	yPos.resize(50);
	radius = 80;
	
	oneShot = true;
	
	for(int i = 0; i < xPos.size(); i++){
        xPos[i] = ofRandom(20, ofGetWidth()-20); // set value using index
        yPos[i] = ofRandom(20, ofGetHeight()-20);
        //cout << xPos[i] << endl;
    }
    
	
	
	
	
}

void draw() {
    
    if( oneShot )   // save image as a pdf
    {
        ofBeginSaveScreenAsPDF("SolLewitt1971.pdf", false);
    }
    
    ofFill();
	
	
	for(int j =0; j < yPos.size(); j++ )
	{
	    ofSetColor(128,20);
	    ofCircle(xPos[j], yPos[j], radius);
	    
    	for(int i = j+1; i < xPos.size(); i++)
    	{
    	    ofSetColor(255,15);
    	    ofLine(xPos[j], yPos[j], xPos[i], yPos[i]);
    	    
    	}
	
	}
	
	if( oneShot ) // Exit the save pdf function
	{
        ofEndSaveScreenAsPDF();
        oneShot = false;
    }
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

