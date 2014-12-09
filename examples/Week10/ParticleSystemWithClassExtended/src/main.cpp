#line 1 "ParticleSystemWithClassExtended"

#include "ofMain.h"
#include "BaseParticle.h"
#include "SquareParticle.h"


class ofApp: public ofBaseApp
{
public:

#line 3 "ParticleSystemWithClassExtended"

std::vector<std::shared_ptr<BaseParticle> > particles;

void setup() {
    ofSetWindowShape(800, 800);
    for (int i = 0; i < 100; i++)
    {
        std::shared_ptr<BaseParticle> pParticle(new BaseParticle());
        
        pParticle->position.x = ofRandomWidth();
        pParticle->position.y = ofRandomHeight();
        pParticle->velocity.x = ofRandom(-10, 10);
        pParticle->velocity.y = ofRandom(-10, 10);
        pParticle->drag = ofRandom(0.1, 0.99);

        particles.push_back(pParticle);
    }
    
     for (int i = 0; i < 100; i++)
    {
        std::shared_ptr<BaseParticle> pParticle(new SquareParticle());
        
        pParticle->position.x = ofRandomWidth();
        pParticle->position.y = ofRandomHeight();
        pParticle->velocity.x = ofRandom(-10, 10);
        pParticle->velocity.y = ofRandom(-10, 10);
        pParticle->drag = ofRandom(0.1, 0.99);

        particles.push_back(pParticle);
    }
}


void update() {
    for (int i = 0; i < particles.size(); i++)
    {
        particles[i]->update();
    }
}


void draw() {
    ofBackground(0);
    for (int i = 0; i < particles.size(); i++)
    {
        particles[i]->draw();
    }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

