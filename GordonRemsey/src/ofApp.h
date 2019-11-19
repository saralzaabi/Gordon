#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        string ofxGetSerialString(ofSerial &serial, char until);
        string ofxTrimString(string str);
        string ofxTrimStringLeft(string str);
        string ofxTrimStringRight(string str);
        std::vector<std::string> split(const std::string &s, char delim);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofTrueTypeFont		font;
        
        bool                bSendSerialMessage;			// a flag for sending serial
    
        ofSerial            serial;
        string              serialString, msg;
        float heading, pitch, roll;
    
    
     ofSoundPlayer donkey;
    ofSoundPlayer mirror;
    ofSoundPlayer yank;
    
    
    
    
    bool donk = true;
    bool mir = true;
    bool yan = true;
    
};
