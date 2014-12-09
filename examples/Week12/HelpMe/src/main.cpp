#line 1 "HelpMe"

#include "ofMain.h"
#include "ofxJSONRPC.h"


class ofApp: public ofBaseApp
{
public:

#line 2 "HelpMe"

ofx::HTTP::BasicJSONRPCServer::SharedPtr server;
unsigned long long turnOffTime;
bool isLightOn;
unsigned long long delay;

ofSerial serial;

void setup() {
    delay = 2000;
    turnOffTime = 0;
    isLightOn = false;
    
    serial.setup(0, 9600);
    
    server = ofx::HTTP::BasicJSONRPCServer::makeShared();
	
    server->registerMethod("help",
                           "Turns on the help light.",
                           this,
                           &ofApp::help);

    server->start();

    ofLaunchBrowser(server->getURL());
}

void update() {
    unsigned long long now = ofGetElapsedTimeMillis();

    if (isLightOn)
    {
        if (now > turnOffTime)
        {
            serial.writeByte('L');
            isLightOn = false;
            cout << "Set Low" << endl;
        }
    }
    else
    {
        if (turnOffTime > now)
        {
            serial.writeByte('H');
            isLightOn = true;
            cout << "Set High" << endl;
        }
    }
    
    while (serial.available() > 0)
    {
        int byte = serial.readByte();
        cout << "Byte =" << byte << endl;
    }
}

void draw() {
    ofBackground(0);
    
    int timeRemaining = ofClamp((int)(turnOffTime - ofGetElapsedTimeMillis()), 0, delay);;
    
    ofDrawBitmapString(ofToString(timeRemaining), 100, 100);
}


void help() {
    turnOffTime = ofGetElapsedTimeMillis() +  delay;
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

