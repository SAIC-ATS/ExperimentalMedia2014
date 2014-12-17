#line 1 "MoreClass"

#include "ofMain.h"
#include "BaseParticle.h"


#line 2 "MoreClass"
#pragma once

class MoreClass
{
public:
	MoreClass(): 
	    drag(8.99),
	    bounciness(-0.80),
	    width(20),
	    height(200),
	    depth(200)
	{
	}

    virtual ~MoreClass()
    {
    }

    virtual void update() 
    {   drag *= bounciness; 
        velocity += acceleration;   
        velocity *= bounciness;
        acceleration *= drag;
        
    }
    
    virtual void draw()
    {  
        ofPushStyle();
        ofFill();
        ofSetColor(color);
        ofRect(position, (width + height + depth), 30);
        ofPopStyle();
    }
    
    ofVec3f position;
    ofVec3f velocity;
    ofVec3f acceleration;
    
    float drag;
    float bounciness;

    float width;
    float height;
    float depth;
    
    ofColor color;
};

