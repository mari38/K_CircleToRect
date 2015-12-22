#pragma once

#include "ofMain.h"
#include "ofxTween.h"

#define pointNum 360
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    int radius;//円の半径
    
    ofxEasingExpo easing;
    ofPoint pGoal[pointNum];
    ofPoint pStart[pointNum];
    ofPoint p[pointNum];
    
    
    void setPosition();

};
