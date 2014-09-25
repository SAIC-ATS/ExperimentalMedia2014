//place 50 points at random
//they should be evenly spaced along the wall
//they should all be connected by  straight lines

#define numPoints 50

float pointradius[numPoints]; 
float pointx[numPoints];
float pointy[numPoints];



void setup() {
    
    ofSetFullscreen(true);
    ofSetBackgroundColor(255,255,255);

    for (int i = 0; i < numPoints; i++) {
        
        pointx[i] = ofRandom(0, ofGetWidth());
        pointy[i] = ofRandom(0, ofGetHeight());
        pointradius[i] = 3;
    
    }


}

void draw() {
    
    for (int i = 0; i < numPoints; i++) {
    
    ofCircle(pointx[i], pointy[i], pointradius[i]);
    ofSetColor(0);
    
    for (int a = 0; a < numPoints; a++) {
        
        ofLine (pointx[i], pointy[i], pointx[a], pointy[a]);
    }
     }
    
    
    
	// put your main code here, to run once each frame:
	
	
	
}

