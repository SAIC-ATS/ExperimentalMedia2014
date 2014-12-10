#line 1 "BasicParticles"

#include "ofMain.h"


#line 1 "BasicParticles"
#pragma once

class BasicParticles
{

public:

    // particle's parameters
    ofVec3f pos;
    ofVec3f vel;
    ofVec3f acc;
    float bounce;
    
    // particle's shape
    float radius;
    ofColor color;
    
    // boundaries XYZ
    ofVec3f limitXYZ;
    
	BasicParticles(){

	}
	
	virtual void setup(ofVec3f edge)
	{
	   limitXYZ.set(edge);
	   
	    pos.x = ofRandom(-limitXYZ.x, limitXYZ.x);
	    pos.y = ofRandom(-limitXYZ.y, limitXYZ.y);
	    pos.z = ofRandom(-limitXYZ.z, limitXYZ.z);
	    
	    vel.set(ofRandom(-5, 5), ofRandom(-5, 5), ofRandom(-5, 5));
	    
	    acc.set(0, 0.01, 0);
	    bounce = 0.8f;
	    
	    radius = ofRandom (5, 10);
	    color = ofColor(ofRandom(64, 192), ofRandom(64, 192), ofRandom(64, 128));
	}
	
	virtual void update()
	{
	    pos += vel;
	    vel += acc;
	    
	    if(pos.x > limitXYZ.x - radius)
	    {
	        pos.x = limitXYZ.x - radius;
	        vel.x *= -bounce;
	       
	      
	    }
	    
	    else if(pos.x < -limitXYZ.x + radius)
	    {
	        pos.x = -limitXYZ.x + radius;
	        vel.x *= -bounce;
	        
	    }
	    
	    if(pos.y > limitXYZ.y - radius)
	    {
	        pos.y = limitXYZ.y - radius;
	        vel.y *= -bounce;
	       
	      
	    }
	    
	    else if(pos.y < -limitXYZ.y + radius)
	    {
	        pos.y = -limitXYZ.y + radius;
	        vel.y *= -bounce;
	        
	    }
	     
	    if(pos.z > limitXYZ.z - radius)
	    {
	        pos.z = limitXYZ.z - radius;
	        vel.z *= -bounce;
	       
	      
	    }
	    
	    else if(pos.z < -limitXYZ.z + radius)
	    {
	        pos.z = -limitXYZ.z + radius;
	        vel.z *= -bounce;
	        
	    }
	    
	    
	    
	    
	}
	
	virtual void draw()
	{
	    ofSetColor(color);
	    ofFill();
	    ofDrawSphere(pos, radius);
	    
	    
	}
};

