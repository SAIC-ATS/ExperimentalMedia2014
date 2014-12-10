#line 1 "SquareParticle"

#include "ofMain.h"
#include "BaseParticle.h"


#line 2 "SquareParticle"
#pragma once


class SquareParticle: public BaseParticle {
public:
	SquareParticle(): angle(ofRandom(360)) {
	}	
	
	virtual ~SquareParticle()
	{
	}
	
    virtual void draw()
    {  
        angle += ofRandom(-.4, .4);
        
        ofFill();
        ofSetColor(0, 255, 0, 127);
        ofPushMatrix();
        ofTranslate(position.x, position.y);
        ofRotateZ(angle);
        ofRect(0, 0, 20, 40);
        ofPopMatrix();
    }
    
    float angle;
};

