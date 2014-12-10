#line 1 "ExpAss11_PSE"

#include "ofMain.h"
#include "BasicParticles.h"
#include "VectorParticles.h"


class ofApp: public ofBaseApp
{
public:

#line 3 "ExpAss11_PSE"

// box size
float boxWidth;
float boxHeight;
float boxDepth;

ofEasyCam cam;

std::vector<std::shared_ptr<BasicParticles> > particles;

void setup() 
{
	ofSetWindowShape(800, 800);
	ofSetFrameRate(60);
	ofBackground(0);
	
	ofEnableDepthTest();
	
	boxWidth = 200;
	boxHeight = 200;
	boxDepth = 200;
	
	ofVec3f box(boxWidth, boxHeight, boxDepth); // the boundaries
	
	int pSize = 50;
	
	for(int i = 0; i < pSize; i++)
	{
	    std::shared_ptr<BasicParticles> pParticle(new BasicParticles());
	    pParticle->setup(box);
	    particles.push_back(pParticle);
	}
	
	for(int i = 0; i < pSize; i++)
	{
	    std::shared_ptr<VectorParticles> pParticle(new VectorParticles());
	    pParticle->setup(box);
	    pParticle->color = ofColor(ofRandom(64, 192));
	    particles.push_back(pParticle);
	}
	
	
}

void update()
{
    
    // ofQuaternion orient = cam.getGlobalOrientation();
    
    //  cout << orient << endl;
    
    for(int i = 0; i < particles.size(); i++)
	{
	   // particles[i]->acc = particles[i]->acc*(orient);
	    particles[i]->update();
	}
    
}

void draw() 
{
    cam.begin();
    ofPushStyle();
    ofFill();
    ofSetColor(127);
    ofPushMatrix();
    ofScale(1, -1, 1);
    ofDrawAxis(100);
    ofNoFill();
    ofDrawBox(0,0,0,
              boxWidth*2,
              boxHeight*2,
              boxDepth*2);
    ofPopStyle();
	for(int i = 0; i < particles.size(); i++)
	{
	    particles[i]->draw();
	}
	ofPopMatrix();
	cam.end();
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

