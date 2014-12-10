#line 1 "CircleVector"

#include "ofMain.h"


#line 1 "CircleVector"
class CircleVector{
    ofVec2f posXY;
    float mouseAngleRad;

public:

	CircleVector(){

	}
	
    void setup(int x, int y)
    {
        posXY.set(x, y);
    }
    
    void update()
    {
        float mouseX = ofGetMouseX();
        float mouseY = ofGetMouseY();
        mouseAngleRad = atan2(mouseY - posXY.y, mouseX - posXY.x);
         
    }
    
    void draw()
    {
        ofSetColor(255);
        ofNoFill();
        ofCircle(posXY, 10);
        
        ofPushMatrix();
        ofTranslate(posXY);
        ofRotateZ(ofRadToDeg(mouseAngleRad));
        ofLine(0,0,10,0);
        ofPopMatrix();
        
        
        
    }
};

