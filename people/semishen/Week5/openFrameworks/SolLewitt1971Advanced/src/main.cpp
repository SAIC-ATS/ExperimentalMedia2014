#line 1 "SolLewitt1971Advanced"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "SolLewitt1971Advanced"
vector<float> xPos;
vector<float> yPos;    
int radius;

bool oneShot;

ofSerial serial;
int data;

void setup() {
	// put your setup code here, to run once:
	ofSetWindowShape(800, 800);
	ofBackground(0);
	ofSetWindowTitle("SolLewitt1971Advanced");
	ofSetFrameRate(60);
	
	xPos.resize(50);
	yPos.resize(50);
	radius = 80;
	
	oneShot = false;
	
	serial.setup(0,9600);
	data = 0;
	
	//oneShot = true;
	
	for(int i = 0; i < xPos.size(); i++){
        xPos[i] = ofRandom(20, ofGetWidth()-20); // set value using index
        yPos[i] = ofRandom(20, ofGetHeight()-20);
        //cout << xPos[i] << endl;
    }
    
	
	
	
	
}

void draw() {
    
    if (serial.available())
	{
	    data = serial.readByte();
	    //ofLogNotice() << data;
	    serial.flush();
	}
	
    
    if( oneShot )   // save image as a pdf
    {
        ofBeginSaveScreenAsPDF("SolLewitt1971Advanced.pdf", false);
    }
    
    ofFill();
	
	
	for(int j =0; j < yPos.size(); j++ )
	{
	    ofSetColor(data,20);
	    ofCircle(xPos[j], yPos[j], radius);
	    
    	for(int i = j+1; i < xPos.size(); i++)
    	{
    	    ofSetColor(255-data,15);
    	    ofLine(xPos[j], yPos[j], xPos[i], yPos[i]);
    	    
    	}
	
	}
	
	if( oneShot ) // Exit the save pdf function
	{
        ofEndSaveScreenAsPDF();
        oneShot = false;
    }
	
}


void keyPressed(int key)
{
 
    if (key == ' ')
    {
        oneShot = true;
        ofLog(OF_LOG_NOTICE, ofToString(oneShot));
    } 
    
    else
    {
        oneShot = false;
    }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

