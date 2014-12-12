#line 1 "HelloWorld"

#include "ofMain.h"
#include "Ball.h"


class ofApp: public ofBaseApp
{
public:

#line 2 "HelloWorld"

ofImage cat;

int numBalls; // The total number of balls we'll use.

vector<Ball> balls; // A collection of all balls.

void setup() {
    
    cat.loadImage("cat4.jpg");
    
    ofSetFrameRate(60);
    
    numBalls = 80; // The total number of balls we'll use.
    
    // Enable vertical sync.
    ofSetVerticalSync(true);
    
    // Set the window size.
    ofSetWindowShape(500, 500);
    
    // Set the background color.
    ofBackground(255);

    // Create the balls
    for (int i = 0; i < numBalls; i++) {
        balls.push_back(Ball());
    }
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
        balls[i].draw(cat);
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
