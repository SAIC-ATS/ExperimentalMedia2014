#line 1 "BaseParticle"

#include "ofMain.h"


#line 1 "BaseParticle"
class BaseParticle
{
public:
	BaseParticle(): drag(0.9)
	{
	}

    virtual ~BaseParticle()
    {
    }

    virtual void update() 
    {
        velocity += acceleration;   
        velocity *= drag;
        position += velocity; 
    }
    
    virtual void draw()
    {  
        ofFill();
        ofSetColor(255, 255, 0, 127);
        ofCircle(position.x, position.y, 20);
    }
    
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f acceleration;
    
    float drag;
    
};

