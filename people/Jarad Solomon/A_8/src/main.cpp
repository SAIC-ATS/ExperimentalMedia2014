#line 1 "A_8"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "A_8"
ofVideoGrabber grabber;

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}
