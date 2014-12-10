#line 1 "CircleVector"

#include "ofMain.h"
#include "Cursor.h"


#line 2 "CircleVector"

class CircleVector{
   

public:

    Cursor cursor;
    
    ofVec2f posXY;
    float mouseAngleRad;
    

	CircleVector(){

	}
	
    void setup(int x, int y)
    {
        posXY.set(x, y);
        cursor.setup();
    }
    
    void update()
    {
        cursor.update();
        
        mouseAngleRad = atan2(cursor.mouseXY.y - posXY.y, cursor.mouseXY.x - posXY.x);
       
        ofVec2f force(attract ());
        
        posXY += force;
        
       
      
        
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
    
    ofVec2f attract ()
    {
        ofVec2f force(cursor.mouseXY);
        force -= posXY;
        force.normalize();
        float distance = cursor.mouseXY.distance(posXY);
        
        if(distance > 10)
        {
            float strength = (cursor.G*cursor.mass) / (distance*distance);
            force *= strength;
            return force;
        } else 
        
        {
            force.set(0, 0);
            return force;
            
        }
    }
};

