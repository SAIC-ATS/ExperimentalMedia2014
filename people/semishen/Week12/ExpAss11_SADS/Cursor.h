#line 1 "Cursor"

#include "ofMain.h"


#line 1 "Cursor"
class Cursor{

public:

    float mass;
    float G;
    ofVec2f mouseXY;
    
	Cursor()
	{

	}	
	
	void setup()
	{
	    mass = 100;
	    G = 0.4f;
	    
	}
	
	void update()
	{
	    
	    mouseXY.x = ofGetMouseX();
	    mouseXY.y = ofGetMouseY();
	    
	}
};

