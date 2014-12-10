#line 1 "VectorParticles"

#include "ofMain.h"
#include "BasicParticles.h"


#line 2 "VectorParticles"
#pragma once

class VectorParticles: public BasicParticles
{

public:
    
    
    ofVec3f lookAt;
    ofVec3f mouseXYZ;
    
    float noiseIndexX = ofRandom(10);
	float noiseIndexY = ofRandom(10);
	float noiseIndexZ = ofRandom(10);
    
	VectorParticles()
	{
	    

	}
	
	virtual void update()
	{
	    
	    
	    noiseIndexX += 0.01f;
	    noiseIndexY += 0.01f;
	    noiseIndexZ += 0.01f;
	    
	    ofVec3f noise(ofSignedNoise(noiseIndexX), ofSignedNoise(noiseIndexY), ofSignedNoise(noiseIndexZ));
	    
	    pos += noise;
	    
	    // the target to be looked at
	    float mouseX = ofMap(ofGetMouseX(), 0 , ofGetWidth(), -limitXYZ.x, limitXYZ.x);
	    float mouseY = ofMap(ofGetMouseY(), 0 , ofGetHeight(), -limitXYZ.y, limitXYZ.y);
	    float mouseZ = limitXYZ.z;
  
	    // define the position for cornea
	    mouseXYZ.set(mouseX, mouseY, mouseZ); 
	    ofVec3f subPM = pos - mouseXYZ;
	    subPM.normalize();
	    subPM *= radius*3/5;
	    lookAt = pos - subPM;
	    
	}
	
	virtual void draw()
	{
	    
	    ofSetColor(color);
	    ofFill();
	    ofDrawSphere(pos, radius); // eyeball
	    ofSetColor(255);
	    ofDrawSphere(lookAt, radius/2); // cornea

	   // ofLine(lookAt, mouseXYZ);
	    
	    
	    
	}
};

