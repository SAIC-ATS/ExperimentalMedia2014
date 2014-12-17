#line 1 "AssignmentNine"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "AssignmentNine"

ofImage image;



void setup() {
    
    ofSetFrameRate(60);
    
    image.loadImage("Eye.jpg");
    // Set the window size.
    ofSetWindowShape(500, 500);
    
    // Set the background color.
    ofBackground(255);

    }


void update() {
    // Update all balls.
    for (int i = 0; i < balls.size(); i++) {
        balls[i].update();
    }
}

void draw() {
    // Draw all balls.
    for (int i = 0; i < balls.size(); i++) {
        balls[i].draw(image);
    }
    
    // Log a message.
    ofLogNotice("draw()") << ofGetTimestampString();
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

