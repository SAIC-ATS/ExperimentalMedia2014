#line 1 "ExpAss08_SlitScan"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "ExpAss08_SlitScan"
ofVideoGrabber grabber;
ofMesh mainMesh;
ofEasyCam cam;

int xPosition;
int zPosition;
int counter;



void setup() 
{
    ofSetWindowShape(800,800);
    ofBackground(0);
    
	grabber.initGrabber(100,100);
	
	float z = 0;
	for (int y = 0; y < grabber.getHeight(); y++)
	{
	    for (int x = 0; x <grabber.getWidth(); x++)
	    {
	        
	        ofVec3f position(x*8, y*8, z);
	        mainMesh.addVertex(position);
	        mainMesh.addColor(0);
	  
	    }

	}
	
	    int height = grabber.getHeight();
	    int width = grabber.getWidth();
		for (int y = 0; y<height-1; y++){
    		for (int x=0; x<width-1; x++){
    			mainMesh.addIndex(x+y*width);				// 0
    			mainMesh.addIndex((x+1)+y*width);			// 1
    			mainMesh.addIndex(x+(y+1)*width);			// 10
    			
    // 			mainMesh.addIndex((x+1)+y*width);			// 1
    // 			mainMesh.addIndex((x+1)+(y+1)*width);		// 11
    //             mainMesh.addIndex(x+(y+1)*width);			// 10
    		}
	}
	
    counter = 0;
}

void update()
{
    grabber.update();
    
    ofPixels slit;
    slit.allocate(1, grabber.getHeight(), OF_PIXELS_RGB); 
    
    if (grabber.isFrameNew())
    {
        ofPushMatrix();
        ofRotateX(counter);
        for (int y = 0; y < grabber.getHeight(); y++ )
        {
            ofColor tempC = grabber.getPixelsRef().getColor(grabber.getWidth() / 2, y);
     		ofVec3f position = mainMesh.getVertex(xPosition+y*grabber.getWidth());
                
            position.z = ofMap(tempC.getLightness(), 0, 255, -100, 100)*-1;
            mainMesh.setVertex(xPosition+y*grabber.getWidth(), position);
 			mainMesh.setColor(xPosition+y*grabber.getWidth(), tempC);
     	
        }
        counter ++;
        xPosition = counter;
        ofPopMatrix();
    
    }
    
    
    
    
}


void draw() 
{
	//grabber.draw(0,0);
    cam.begin();
    ofPushMatrix();
    ofRotateX(180);
    ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2, 400);
    ofRotate(-45,1,0,0);
    
    mainMesh.drawFaces();
    
    ofPopMatrix();
    cam.end();

}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

