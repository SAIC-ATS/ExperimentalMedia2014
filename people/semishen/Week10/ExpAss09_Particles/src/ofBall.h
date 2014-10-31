#line 1 "ofBall"

#include "ofMain.h"


#line 1 "ofBall"
class ofBall{

public:

    ofVec2f position;
    ofVec2f vel;
    ofVec2f acc;
    
    int radius;
    ofColor color;
    
    //force
    float rebound;
    float drag;
    
    //texture
    ofTexture arrow;
    
    //rotation
    float angle;

	ofBall(){
	    
        position = ofVec2f(ofGetWidth()/2, ofGetHeight()/2);
        vel = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
        acc = ofVec2f(ofRandom(-0.01, 0.01), ofRandom(-0.01, 0.01));
        
        radius = ofRandom(5, 10);
        color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255), ofRandom(255));
        
        //force
        rebound = ofRandom(0.8, 0.99);
        drag = ofRandom(0.99, 0.999);
        
        //load texture
        ofLoadImage (arrow, "arrow.jpg");
        
        

	}	
	
	void update() {
	    
	    vel *= drag; 
        vel += acc;
        angle = position.angle(vel);
        position += vel;
        
        if ((position.x+radius) > ofGetWidth())
        {
            vel.x*=-rebound;
            position.x = ofGetWidth() - radius;
        
        
        }
    
        if ((position.x-radius) < 0)
        {
            vel.x*=-rebound;
            position.x = radius;
        
        }
        
        if ((position.y+radius) > ofGetHeight())
        {
            vel.y*=-rebound;
            position.y = ofGetHeight() - radius;
            
        }
        
        if ((position.y-radius) < 0)
        {
            vel.y*=-rebound;
            position.y = radius;
            
        }
        
        
    
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
        
        // Draw the texture.
        
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofPushMatrix();
        ofTranslate(position.x, position.y);
        ofRotate(angle,0,0,1);
        arrow.draw(0, 0, radius*1.5, radius*1.5); 
        ofPopMatrix();
        
        
    
    }
};

