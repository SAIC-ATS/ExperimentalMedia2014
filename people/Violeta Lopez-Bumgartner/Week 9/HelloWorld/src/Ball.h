#line 1 "Ball"

#include "ofMain.h"


#line 1 "Ball"
class Ball{
    
public:

    ofVec2f position;
    ofVec2f velocity;
    
    int radius;
    
    ofColor color;
    
    ofVec2f acceleration;
    
    Ball() {
        
        // Choose a random radius.
        radius = ofRandom(5, 10);
        
        // Choose a random position.
        position = ofVec2f(ofRandom(radius, ofGetWidth() - radius), 
                           ofRandom(radius, ofGetHeight() - radius));
        
        // Choose a random velocity.
        velocity = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
      
        // Choose a random color between red and yellow.
        color = ofColor(255, ofRandom(255), 0, 255);
        
        acceleration = ofVec2f(0, 1); 
    
    }
    
    void update() {
        
        // Update the x velocity.
        if (position.x + radius >= ofGetWidth() ||
            position.x - radius <= 0) {
            velocity.x *= -1;
            
        }
        
        // Update the y velocity.
        if (position.y + radius >= ofGetHeight() ||
            position.y - radius <= 0) {
            velocity.y *= -1;
           
        }
        
        // Update the position.
        velocity += acceleration;
        position += velocity;
        
    
    }

    void draw() {
        ofFill();
    
        // Set the fill color for this ball.
        ofSetColor(color.r, color.g, color.b, 127);
        
        // Draw the ball.
        ofCircle(position, radius);
        
        ofNoFill();
        
        // Set the outline for this ball.
        ofSetColor(color);
        
        // Draw the ball.
        ofCircle(position, radius); 
    
    }

};

