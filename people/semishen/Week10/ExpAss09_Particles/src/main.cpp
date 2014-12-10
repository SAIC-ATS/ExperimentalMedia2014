#line 1 "ExpAss09_Particles"

#include "ofMain.h"
#include "ofBall.h"


class ofApp: public ofBaseApp
{
public:

#line 2 "ExpAss09_Particles"

int numBalls; // The total number of balls we'll use.
int numSquares; 

vector<ofBall> balls; // A collection of all balls.
// vector<ofSquare> squares;

void setup() {
    ofSetFrameRate(60);
    
    numBalls = 75; // The total number of balls we'll use.
    // numSquares = 50;
    
    // Enable vertical sync.
    ofSetVerticalSync(true);
    
    // Set the window size.
    ofSetWindowShape(500, 500);
    
    // Set the background color.
    ofBackground(255);

    // // Create the balls
    // for (int i = 0; i < numBalls; i++) {
    //     balls.push_back(ofBall());
    // }
}

void update() {
    // Update all balls.
    if (balls.size() < numBalls)
    {
        balls.push_back(ofBall());
    }
    
    for (int i = 0; i < balls.size(); i++) {
        balls[i].update();
    }
    
    // if (squares.size() < numSquares)
    // {
    //     squares.push_back(ofSquare());
    // }
    
    // for (int i = 0; i < squares.size(); i++) {
    //     squares[i].update();
    // }
   
}

void draw() {
    // Draw all balls.
    for (int i = 0; i < balls.size(); i++) {
        balls[i].draw();
    }
    
    // for (int i = 0; i < squares.size(); i++) {
    //     squares[i].draw();
    // }
    
    // Log a message.
    //ofLogNotice("draw()") << ofGetTimestampString();
}

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

