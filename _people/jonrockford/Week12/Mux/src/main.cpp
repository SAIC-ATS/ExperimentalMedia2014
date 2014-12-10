#line 1 "Mux"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "Mux"
ofSerial mySerial;

ofVideoPlayer video;

//ofEasyCam cam;

std::string myBuffer; //std means standard; it's a C++ thing
int A = 0;
int B = 0;
int C = 0;
int D = 0;
int E = 0;
int F = 0;
int G = 0;
int H = 0;
int I = 0;
int J = 0;
int K = 0;
int L = 0;
int M = 0;
int N = 0;
int O = 0;
int P = 0;

void setup() {
	
	mySerial.setup(0, 9600);
	video.loadMovie("Train.mov");
	video.play();
	
	
}
void update() {  
    video.update(); 
}

void draw() {
    ofSetWindowShape(1024, 1024);
	ofBackground(M/4, N/4, O/4);
	
	
	ofPushMatrix();
	ofRotate(A, J, C, H);
	//cam.begin();
	//video.setPosition(L);
	//video.setSpeed(A/50);
    video.draw(D,(L*-1.2));
    //ofGetWidth() = ofGetWidth()/M;
	ofSetColor(A, B, C);
	
	ofCircle(A, E, F);
	ofSetColor(N, O, P, 100);
	ofFill();
	ofEllipse(J, K, L, M);
	ofFill();
	ofSetColor(G, H, I, 100);
	ofPopMatrix();
	
//	cam.end();
	
	
	
	// Look at each incoming byte until no more are avaialble to look at.
	while (mySerial.available() >0)
	{
	    // Read the current byte and set it equal to "myByte"
	    int myByte = mySerial.readByte();
	    
	    // Look at "myByte" and see if it is equal to the new line character.
	    if (myByte == '\n')
	    {
	        std::cout << myBuffer << std::endl;
	        // split the string and parse it into our variables
	        std::vector<std::string> myTokens = ofSplitString(myBuffer, ",");
	        
	        if (myTokens.size() == 17)
	        {
	            // we have the right number of tokens, so we can move forward
	            A = ofToInt (myTokens[0]) / 4;
	            B = ofToInt (myTokens[1]) / 4;
	            C = ofToInt (myTokens[2]) / 4;
	            //C = ofToInt (myTokens[3]) / 4;
	            D = ofToInt (myTokens[3]);
	            E = ofToInt (myTokens[4]);
	            F = ofToInt (myTokens[5]);
	            G = ofToInt (myTokens[6]) / 4;
	            H = ofToInt (myTokens[7]) / 4;
	            I = ofToInt (myTokens[8]) / 4;
	            J = ofToInt (myTokens[9]);
	            K = ofToInt (myTokens[10]);
	            L = ofToInt (myTokens[11]);
	            M = ofToInt (myTokens[12]);
	            N = ofToInt (myTokens[13]);
	            O = ofToInt (myTokens[14]);
	            P = ofToInt (myTokens[15]);
	        }
	        else{
	            // we have the wrong number of tokens, so we won't parse them   
	        }
	        
	        myBuffer.clear();
	        
	    }
	    else
	    {
	        // if it is not a new line, then save the character for later
	        myBuffer += myByte;
	        
	        
	   }
	    
	}
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

