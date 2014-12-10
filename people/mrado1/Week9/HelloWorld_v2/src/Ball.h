#line 1 "Ball"

#include "ofMain.h"


#line 1 "Ball"
class Ball{
    
public:

    ofImage basketball;

    ofVec2f position;
    ofVec2f lastPosition;
    ofVec2f velocity;
    
    ofColor color;
    
    ofVec2f accel;
    
    float dim; // Radius of our circle particle
    
    float rebound;  // Scales the velocity when we hit, creating friction to lose energy
    
    float drag; // Similar to acceleration, slows down velocity
    
    float angle; // Get the angle of the movement
    
    Ball() {
        
        basketball.loadImage("basketball.png");
        
        // Choose a width and height of the ball 
        dim = 100;
        
        // Choose a random position.
        position = ofVec2f(ofRandom(0 + dim/2, ofGetWidth() - dim/2), 
                           ofRandom(0 + dim/2, ofGetHeight() - dim/2));
        
        // Choose a random velocity.
        velocity = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
      
        // Choose a random color between red and yellow.
        color = ofColor(255, ofRandom(255), 0, 255);
        
        // Add rebound effect
        rebound = 0.9;
        
        // Simulate drag
    	drag = 0.9999;
    	
    	accel.x = 0.0;
    	accel.y = 0.25;
    
    }
    
    void update() {
        
        velocity += accel; // add the x acceleration component to the x velocity
        velocity *= drag; // take away x/y velocity because of drag
        lastPosition = position;
        position += velocity;
        angle = position.angle(lastPosition);
        
        // Update the x velocity.
        // if (position.x + radius >= ofGetWidth() ||
        //     position.x - radius <= 0) {
        //     velocity.x *= -rebound;
        // }
        
        // Update the y velocity.
        // if (position.y + radius >= ofGetHeight() ||
        //     position.y - radius <= 0) {
        //     velocity.y *= -rebound;
        // }
        
        
        if (position.x - dim/2 < 0) { // left wall
            velocity.x *= -rebound;
            position.x = dim/2;
        }
        
        if (position.x + dim/2 > ofGetWidth()) { // right wall
            velocity.x *= -rebound;
            position.x = ofGetWidth() - dim/2;
        }
        
        if (position.y - dim/2 < 0) { // top wall
            velocity.y *= -rebound;
            position.y = dim/2;
        }
        
        if (position.y + dim/2 > ofGetHeight()) { // bottom wall
            velocity.y *= -rebound;
            position.y = ofGetHeight() - dim/2;
        }
        
        
        
        // Update the position.
        
    
    }

    void draw() {
        ofFill();
    
        // Set the fill color for this ball.
        // ofSetColor(color.r, color.g, color.b, 127);
        
        // Draw the ball.
        // ofCircle(position, radius); 
        // basketball.draw(position.x, position.y, radius, radius);
        
    //    ofNoFill();
        
        // Set the outline for this ball.
    //    ofSetColor(color);
        
        // Draw the ball.
        // ofCircle(position, radius);
        basketball.setAnchorPoint(dim/2, dim/2);
        
        // ofPushMatrix();
        //  basketball.ofRotate(30);
            basketball.draw(position, dim, dim);
        // ofPopMatrix();
        
        ofLogNotice("Angle: ") << angle;
    
    }

};

