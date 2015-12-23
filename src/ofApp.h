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
    ofPoint pGoal[pointNum];//最後の形を描く座標
    ofPoint pStart[pointNum];//最初の形を描く座標
    ofPoint p[pointNum];//mapで帰ってきた値
    
    
    void setPosition();

};
