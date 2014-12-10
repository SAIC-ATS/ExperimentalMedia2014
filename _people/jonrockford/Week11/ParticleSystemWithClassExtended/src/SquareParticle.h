#line 1 "SquareParticle"

#include "ofMain.h"
#include "BaseParticle.h"


#line 2 "SquareParticle"

#pragma once


class SquareParticle: public BaseParticle {
public:
	SquareParticle(): angle(ofRandom(180)) {
	}	
	
	virtual ~SquareParticle()
	{
	}
	
    virtual void draw()
    {  
        angle += ofRandom(-.4, .4);
        
        ofFill();
        ofSetColor(255, 0, 120, 120);
        ofPushMatrix();
        ofLine(position.x, position.y, ofGetWindowWidth(), 0);
        ofTranslate(position.x, position.y);
        ofRotateY(ofRandom(0, 180));
        ofRotateZ(angle);
        ofTriangle(50,10,10,40,90,40);
        //ofSetColor(255, 153, 0);
        
        ofPopMatrix();
    }
    
    float angle;
};

