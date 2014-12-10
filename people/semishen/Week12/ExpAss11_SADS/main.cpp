#line 1 "ExpAss11_SADS"

#include "ofMain.h"
#include "CircleVector.h"


class ofApp: public ofBaseApp
{
public:

#line 2 "ExpAss11_SADS"

vector<CircleVector> objs;

void setup() 
{
    ofSetWindowShape(640, 480);
    ofSetFrameRate(30);
    ofBackground(0);
    
    int numX = (640-40)/40;
    int numY = (480-40)/40;
    objs.resize(numX*numY);
    
    int i = 0;
    for(int x = 20; x < 620; x += 40)
    {
        for(int y = 20; y < 460; y += 40)
        {
            
            objs[i].setup(x, y);
            i++;
        }
        
    }
    
	
}

void update()
{
    for (int i = 0; i < objs.size(); i++)
    {
        objs[i].update();
        
    }
    
}

void draw() 
{
    for (int i = 0; i < objs.size(); i++)
    {
        objs[i].draw();
    
    }
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

