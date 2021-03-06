#line 1 "ExpAss07_01"

#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:

#line 1 "ExpAss07_01"
ofImage image;
ofVboMesh mesh;
ofVideoGrabber vidGrabber;
ofEasyCam easyCam;

ofSerial mySerial;
string myBuffer;

void setup() {
    ofSetWindowShape(800, 800);
    ofSetVerticalSync(true);
	ofSetFrameRate(30);
	
// 	vidGrabber.setVerbose(true);
// 	vidGrabber.initGrabber(200,200);
	
// 	mySerial.setup(0,9600);
	
    image.loadImage("Mona Lisa.jpg");
    image.resize(200, 200); //reduce the size of meshes
    
	mesh.setMode(OF_PRIMITIVE_LINES);
	
 
    // float maxIntensityThreshold = 256;
    // float minIntensityThreshold = 100;
    int w = image.getWidth();
    int h = image.getHeight();
    for (int x=0; x<w; x+=4) {
        for (int y=0; y<h; y+=4) {
            ofColor fromImage = image.getColor(x, y);
            // ofColor fromVideo = vidGrabber.getPixelsRef().getColor(x, y);
            float intensity = fromImage .getLightness();
            // if (intensity >= minIntensityThreshold &&
            //         intensity <= maxIntensityThreshold) 
            // {
               // float saturation = fromImage.getSaturation();
                float z = ofMap(intensity, 0, 255, 0, 100);
                ofVec3f pos(4*x, 4*y, -z);
                mesh.addVertex(pos);
                mesh.addColor(fromImage);
            // }
        }
    }
    cout << mesh.getNumVertices() << endl; 
    float minDistance = 15;
    float maxDistance = 30;
    int numVerts = mesh.getNumVertices();
    for (int a=0; a<numVerts; ++a) {
        ofVec3f verta = mesh.getVertex(a);
        for (int b=a+1; b<numVerts; ++b) {
            ofVec3f vertb = mesh.getVertex(b);
            for (int c=b+1; c<numVerts;++c) {
                ofVec3f vertc = mesh.getVertex(c);
                float distanceAB = verta.distance(vertb);
                float distanceAC = verta.distance(vertc);
                float distanceBC = vertb.distance(vertc);
                float distance = (distanceAB+distanceAC+distanceBC)/3
                if (distance <= maxDistance && distance >= minDistance) {
                    mesh.addIndex(a);
                    mesh.addIndex(b);
                    mesh.addIndex(c);
                }
            }
        }
    }
}

 void update()
 {
     vidGrabber.update();
     //update the mesh if we have a new frame
 	if (vidGrabber.isFrameNew()){
 		//this determines how far we extrude the mesh
 		for (int i=0; i<mesh.getNumVertices(); i++){
		    
 		    ofVec3f position = mesh.getVertex(i);
            ofColor sampleColor(vidGrabber.getPixelsRef().getColor(position.x/4, position.y/4));
            position.z = ofMap(sampleColor.getLightness(), 0, 255, 0, 100);
            mesh.setVertex(i, position);
			
 			//now we get the vertex aat this position
 			//we extrude the mesh based on it's brightness
 			mesh.setColor(i, sampleColor);
 		}
 	}
 //	image.update();

 }


void draw() {
    ofColor centerColor = ofColor(85, 78, 68);
    ofColor edgeColor(0, 0, 0);
    ofBackgroundGradient(centerColor, edgeColor, OF_GRADIENT_CIRCULAR);
    easyCam.begin();
    //vidGrabber2.draw(0,0);
        ofPushMatrix();
            ofRotate(180,0,0,0);
            ofTranslate(-ofGetWidth()/2, -ofGetHeight()/2);
            
            mesh.draw();
            
        ofPopMatrix();
    easyCam.end();
}


};

int main()
{
    ofSetupOpenGL(320, 240, OF_WINDOW);
    ofRunApp(new ofApp());
}

