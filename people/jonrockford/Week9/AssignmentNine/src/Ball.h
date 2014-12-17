#line 1 "Ball"

#include "ofMain.h"


#line 1 "Ball"
class Ball{
    
public:

    float x; // Particle position x.
    float y; // Particle postiion y.

    float vx; // Velocity in the x direction;
    float vy; // Velocity in the y direction;

    float ax; // Acceleration in the x direction. (The change in velocity over time)
    float ay; // Acceleration in the y directions.

    // float radius; // Radius of our circle particle;

    float rebound; //Modifies the velocity when we hit the wall - absorbs energy 
    float drag; // Force that slows down the velocity

    ofVec2f position;
    ofVec2f velocity;
    //ofVec2f angle;
    int radius;
    
    
    
    ofColor color;
    
    Ball() {
        
        // Choose a random radius.
        
        radius = ofRandom(5, 10);
        
        rebound = 0.9;
        drag = 0.99;
        
        vx = 5;
	    vy = -2;
	
	    ax = 0;
	    ay = 0.25;
	    
	 
        
        // Choose a random position.
        position = ofVec2f(ofRandom(radius, ofGetWidth() - radius), 
                           ofRandom(radius, ofGetHeight() - radius));
        
        // Choose a random velocity.
        velocity = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
        
    
        //angle = ofVec2f(ofRandom(-180, 180), (-180, 180));
      
        // Choose a random color between red and yellow.
        color = ofColor(255, ofRandom(255), 0, 255);
    
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
        position += velocity;
        //angle += velocity;
    
    }

    void draw(ofImage image) {
        //ofFill();
    
        // Set the fill color for this ball.
        //ofSetColor(color.r, color.g, color.b, 127);
        
        // Draw the ball.
        //ofCircle(position, radius);
        
        ofSetColor(255); 
        ofPushMatrix();
            ofTranslate(position);
            ofVec2f uprightPosition(0.0, 1.0);
            float angle = uprightPosition.angle(velocity);
            ofRotate(angle);
            image.setAnchorPoint(radius, radius);
            image.draw(0, 0, radius*2.0, radius*2.0);
        ofPopMatrix();
        
        //ofNoFill();
       
        // Set the outline for this ball.
        //ofSetColor(color);
        
        // Draw the ball.
       // ofCircle(position, radius); 
    
    }

};
