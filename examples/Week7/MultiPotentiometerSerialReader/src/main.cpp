#line 1 "MultiPotentiometerSerialReader"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "MultiPotentiometerSerialReader"
// Declare the serial object
ofSerial mySerial;

// Declare the buffer variable
std::string myBuffer;

// Declare and initialize the red, green and blue values
int R = 0; // potentiometer 1
int G = 0; // potentiometer 2
int B = 0; // potentiometer 3

void setup() 
{
    // setup the serial object to connect to the arduino @ 9600 bauds
	mySerial.setup(0, 9600);
}

void draw() 
{
    // Set the background using our potentiometer data
    ofBackground(R, G, B);
    

    // Look at each incoming byte until no more are available to look at.
    while (mySerial.available() > 0)
    {
        // Read the current byte and set it eqal to "myByte".
        int myByte = mySerial.readByte();
        
        // Look at "myByte" and see if it is equal to the new line character.
        if (myByte == '\n')
        {
            // print it to the console, just to make sure it's all ok.
            std::cout << myBuffer << std::endl; 
            
            // split the string and parse it into our variables
            std::vector<std::string> myTokens = ofSplitString(myBuffer, ",");
                
            if (myTokens.size() == 3)
            {
                // we have the right number of tokens, so we can move forward.
                // since we are sending over data in the range of 0-1023, we
                // divide it by 4 to bring it into the range of 0-255.
                R = ofToInt(myTokens[0]) / 4; 
                G = ofToInt(myTokens[1]) / 4;
                B = ofToInt(myTokens[2]) / 4;
            }
            else
            {
                // we have the wrong number of tokens, so we won't parse them.   
            }
            
            // clear the memory buffer
            myBuffer.clear();
        }
        else
        {
            // if it is not a new line, then save the character for later
            myBuffer += myByte;   
        }
    }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

