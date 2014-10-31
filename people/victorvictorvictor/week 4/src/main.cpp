#line 1 "week5_2"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "week5_2"
#define numberofdots 50 float dotx[numberofdots];float doty[numberofdots];float dotr[numberofdots];float linex1[numberofdots];float liney1[numberofdots];float linex2[numberofdots];float liney2[numberofdots];bool oneShot; void setup(){            ofBackground(255);    ofSetWindowShape(1028, 768);           oneShot = false;        for(int i=0; i<numberofdots; i++)    {        dotx[i] = ofRandom(100, (ofGetWidth()-100));        doty[i] = ofRandom(100, (ofGetHeight()-100));        dotr[i] = ofRandom(5, 20);    }} void draw(){        if( oneShot ){	ofBeginSaveScreenAsPDF("sollewitt_victor.pdf", false); 	}     for(int i=0; i<numberofdots; i++)        {           for(int v=0; v<numberofdots; v++)            {            ofSetColor(0);            ofNoFill();            ofCircle(dotx[i], doty[i], dotr[i]);            ofLine(dotx[i], doty[i], dotx[v], doty[v]);            }           }        if( oneShot ) 	{        ofEndSaveScreenAsPDF();        oneShot = false;    }} void keyPressed(int key){    if('s' == key)    {        oneShot = true;        return;    }                if (' ' == key)         {        for(int i=0; i<numberofdots; i++)            {            dotx[i] = ofRandom(100, ofGetWidth()-100);            doty[i] = ofRandom(100, ofGetHeight()-100);            dotr[i] = ofRandom(5, 20);            }        }}

};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

