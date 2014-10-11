#line 1 "ImageExample"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "ImageExample"
ofImage bikers;
ofImage gears;
ofImage tdf;
ofImage tdfSmall;
ofImage transparency;
ofImage bikeIcon;


void setup() {
    ofSetWindowShape(1024, 768);
    
	bikers.loadImage("images/bikers.jpg");
	gears.loadImage("images/gears.gif");
	tdf.loadImage("images/tdf_1972_poster.jpg");

	tdfSmall.loadImage("images/tdf_1972_poster.jpg");
	tdfSmall.resize(tdfSmall.width / 4, tdfSmall.height / 4);
	tdfSmall.setImageType(OF_IMAGE_GRAYSCALE);

	transparency.loadImage("images/transparency.png");
	bikeIcon.loadImage("images/bike_icon.png");
	bikeIcon.setImageType(OF_IMAGE_GRAYSCALE);	
}

void draw() {
    ofBackground(255);
    
	ofSetColor(255);

	bikers.draw(0, 0);
	gears.draw(600, 0);
	tdf.draw(600, 300);
	
	ofSetColor(220, 50, 50);
	tdfSmall.draw(200, 300);
	
	ofSetColor(255);
	ofEnableAlphaBlending();
	float wave = sin(ofGetElapsedTimef());
	transparency.draw(500 + (wave * 100), 20);
	ofDisableAlphaBlending();
	
	// getting the ofColors from an image,
	// using the brightness to draw circles
	int w = bikeIcon.getWidth();
	int h = bikeIcon.getHeight();
	float diameter = 10;
	ofSetColor(255, 0, 0);
	for(int y = 0; y < h; y++) {
		for(int x = 0; x < w; x++) {
			ofColor cur = bikeIcon.getColor(x, y);
			float size = 1 - (cur.getBrightness() / 255);
			ofCircle(x * diameter, 500 + y * diameter, 1 + size * diameter / 2);
		}
	}
	
	// same as above, but this time
	// use the raw data directly with getPixels()
	unsigned char* pixels = bikeIcon.getPixels();
	ofSetColor(0, 0, 255);
	for(int y = 0; y < h; y++) {
		for(int x = 0; x < w; x++) {
			int index = y * w + x;
			unsigned char cur = pixels[index];
			float size = 1 - ((float) cur / 255);
			ofCircle(200 + x * diameter, 500 + y * diameter, 1 + size * diameter / 2);
		}
	}
	
	ofSetColor(255);
	bikeIcon.draw(190, 490, 20, 20);
	
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

