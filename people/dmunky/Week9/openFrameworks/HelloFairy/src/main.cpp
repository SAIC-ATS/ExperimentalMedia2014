#line 1 "HelloFairy"

#include "ofMain.h"
#include "Ball.h"


class ofApp: public ofBaseApp
{
public:

#line 2 "HelloFairy"
ofImage fairy;

int numBalls; // The total number of balls we'll use.

vector<Ball> balls; // A collection of all balls.

void setup() {
    ofSetFrameRate(60);
    fairy.loadImage("fairy.png");
    
    numBalls = 30; // The total number of balls we'll use.
    
    // Enable vertical sync.
    ofSetVerticalSync(true);
    
    // Set the window size.
    ofSetWindowShape(400, 400);
    
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
        balls[i].draw(fairy);
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
