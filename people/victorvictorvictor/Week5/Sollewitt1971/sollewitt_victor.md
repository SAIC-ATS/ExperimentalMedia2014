#define numberofdots 50
 
float dotx[numberofdots];
float doty[numberofdots];
float dotr[numberofdots];

float linex1[numberofdots];
float liney1[numberofdots];
float linex2[numberofdots];
float liney2[numberofdots];
 
void setup(){
    ofBackground(255);
    ofSetWindowShape(1028, 768);   
   
    for(int i=0; i<numberofdots; i++)
    {
        
        dotx[i] = ofRandom(0, ofGetWidth());
        doty[i] = ofRandom(0, ofGetHeight());
        dotr[i] = 1;
      
    }
}

 
void draw(){
 
    for(int i=0; i<numberofdots; i++)
        {   
        ofSetColor(0);
        ofNoFill();
        ofCircle(dotx[i], doty[i], dotr[i]);
        
    for(int v=i++; v<49; v++)
        {
        ofLine(dotx[i], doty[i], dotx[v], doty[v]);
        }   
        }
}
 
