#line 1 "MyFirst3D"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "MyFirst3D"
ofEasyCam cam;

ofImage puppy;

void setup() {
	ofSetWindowShape(800, 800);
	puppy.loadImage("puppy.jpg");
}

void draw() {
 	ofBackground(0);
  	
 	cam.begin();

    for (int i = 0; i < 100; i++)
    {
        puppy.draw(0, 0, i * 10);  
    }
     	
 	cam.end();
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

