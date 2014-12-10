#line 1 "Ball"

#include "ofMain.h"


#line 1 "Ball"
class Ball{
    

    
public:

    
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f acceleration;

    
    int radius;
    
    ofColor color;
    
    Ball() {
        
        // Choose a random radius.
        radius = ofRandom(15, 35);
        
        // Choose a random position.
        position = ofVec2f(ofRandom(radius, ofGetWidth() - radius), 
                           ofRandom(radius, ofGetHeight() - radius));
        
        // Choose a random velocity.
        velocity = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
        
        acceleration = ofVec2f(0, -0.5);
    
      
        // Choose a random color between red and yellow.
        color = ofColor(255, ofRandom(255), 0, 255);
    
    }
    
    void update() {
        float drag = 0.999;
        float rebound = -0.9;
        
       if (position.x - radius < 0) {
        velocity.x *= rebound;
        position.x = radius;
        }
    
        else if (position.x + radius > ofGetWidth()) {
        velocity.x *= rebound;
        position.x = ofGetWidth() - radius;
        }
        
       if (position.y - radius < 0) {
        velocity.y *= rebound;
        position.y = radius;
        }
    
        else if (position.y + radius > ofGetHeight()) {
        velocity.y *= rebound;
        position.y= ofGetHeight() - radius;
        }
       
        velocity *= drag;
        velocity += acceleration; 
        position += velocity*rebound;


    }

    void draw(ofImage &cat) {
        
        cat.draw (position, radius, radius);
        // ofFill();
    
        // // Set the fill color for this ball.
        // ofSetColor(color.r, color.g, color.b, 127);
        
        // // Draw the ball.
        // ofCircle(position, radius);
        
        // ofNoFill();
        
        // // Set the outline for this ball.
        // ofSetColor(color);
        
        // // Draw the ball.
        // ofCircle(position, radius); 
    
    }
    
    

};

