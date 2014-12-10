#line 1 "MySerialTest"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "MySerialTest"
ofSerial mySerial;
string values; // Create a string, could also say std::string values;

int potValue;
int lightValue;
int wildCard;

void setup() {
	// put your setup code here, to run once
	ofSetWindowShape(800, 600);
	ofSetFrameRate(30);
	ofSetCircleResolution(60);
	mySerial.setup(0, 9600);

}

void draw() {
	// put your main code here, to run once each frame:

	ofBackground(lightValue); // sets background to black
	ofSetColor(255, 255, 0); // sets fill color to yellow
	ofFill(); // fills with background ofSetColor
	
	int x = ofGetMouseX();
	int y = ofGetMouseY();
// 	int mappedX = ofMap(x, 0, ofGetWidth(), 0, 255, true); // maps x by width of screen to 0-255, constrains values with true variable
	
// 	mySerial.writeByte(mappedX); // sends value 0-255 to arduino
	
	ofCircle(x, y, potValue, potValue);
	
	// Look at each incoming byte until no more are available to look at
	while (mySerial.available() > 0)
	{
	// Read current byte and set it equal to myByte
	    char myByte;
	    myByte = mySerial.readByte();
	    
	// Look at myByte and see if it is equal to a new line character
	    if (myByte == '\n') {
	        vector<string> myValues = ofSplitString(values, ",");
	        
           // Split the string and parse it into our variables
            if (myValues.size() == 3){
                potValue = ofToInt(myValues[0]);
                lightValue = ofToInt(myValues[1]);
                wildCard = ofToInt(myValues[2]);
            }
    	    values = "";
	    }
	        // Check to see if it is a carriage return
	        else if (myByte == '\r') {
	            }
	            // If it is not a new line or carriage return, pass variables to values string
	            else {
	                values = values + myByte;
	            }
	}
	
	 std::cout << potValue << "," << lightValue << "," << wildCard << std::endl;
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

