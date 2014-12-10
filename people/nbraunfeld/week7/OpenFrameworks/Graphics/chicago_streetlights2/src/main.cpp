#line 1 "chicago_streetlights2"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "chicago_streetlights2"
ofImage imageDay;
ofImage imageNight;
ofImage imageLights;

float xOffset;
float startTime = ofGetElapsedTimef();

void setup() {
    imageDay.loadImage("chicago.map.day.jpg");
    imageNight.loadImage("chicago.map.9.jpg");
    imageLights.loadImage("chicago.map.lights2.jpg");
    
    // ofSetWindowShape(800,600);
	ofSetFullscreen(true);
	ofBackground(0);
	ofSetBackgroundAuto(false);
}


void draw() {
    float time = ofGetElapsedTimef() - startTime;
    int fadeDuration = 15;
	float alpha = ofMap(time, 0, fadeDuration, 0, 255);
	
	imageDay.draw(-1,100,1680,825);
	
	
	if (time < fadeDuration)
	{
	ofSetColor(255, 255, 255, alpha);
	imageNight.draw(-1,100,1680,825);
	}

    
    else if (time >= fadeDuration)
	{
	    
	    imageNight.draw(-1,100,1680,825);
	   // int imageWidth = ofClamp(imageWidth, 0, 1680);
	   // int imageHeight = ofClamp(
        
      
        imageLights.drawSubsection(1680, 100, xOffset, 825, imageLights.getWidth(), 0, xOffset*2.82, imageLights.getHeight());
        
        xOffset--;
	 
    }
        
        
        
        
        
        
        
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

