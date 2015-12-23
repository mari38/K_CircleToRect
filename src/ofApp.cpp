#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    radius = 100;
    setPosition();//関数よびだすだけ
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofBackground(0);
    
    int loopFrame = 60;
    int nowFrame = ofGetFrameNum()%loopFrame;
    
    for(int i = 0; i < pointNum; i++){
        p[i].x = ofxTween::map(nowFrame, 0, loopFrame, pStart[i].x, pGoal[i].x, true, easing);
        p[i].y = ofxTween::map(nowFrame, 0, loopFrame, pStart[i].y, pGoal[i].y, true, easing);
        
        
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofCircle(ofGetMouseX(), ofGetMouseY(), 10);//mouseの座標を、ofGetMouseX,Y で取得する
    
    ofPushMatrix();
    ofSetColor(255);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofFill();
    ofBeginShape();
    
    for(int i=0; i<pointNum; i++){
        ofVertex(p[i]);
    }
    
    ofEndShape();
    ofPopMatrix();
    
    
}

//--------------------------------------------------------------
void ofApp::setPosition(){
    
    float radStep = 360/(float)pointNum;
    for(int i=0; i<pointNum; i++){
        float theta = ofDegToRad(radStep*i);
        float rectRate = 0.7;
        pGoal[i] = ofPoint(sin(theta)*radius,cos(theta)*radius);
        
        if(i < pointNum/4){
            pStart[i] = ofPoint(radius*rectRate,radius*rectRate);
            
        }else if(i < pointNum/4*2){
            pStart[i] = ofPoint(radius*rectRate,-radius*rectRate);
        }
        else if(i < pointNum/4*3){
            pStart[i] = ofPoint(-radius*rectRate,-radius*rectRate);
        }else{
            pStart[i] = ofPoint(-radius*rectRate,radius*rectRate);
        }
    }
    
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
