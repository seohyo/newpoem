#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    poemBackground.loadImage("images/poem-bg-small.jpg");
    poemDot.loadImage("images/bgm-dot.png");

    noD = 0;
    
    for (int i = 0; i < 30; i++){
        ofPoint pos;
        pos.set(i*ofRandom(3, 25), i*ofRandom(1,20));
        pts.push_back(pos);
    }
    
    bDrawMessage = true;
}

//--------------------------------------------------------------
void ofApp::update(){



}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255, 255, 255);
    poemBackground.draw(0, 0);
    
    for (int i = 0; i < 30; i++) {
        poemDot.draw(pts[i].x, pts[i].y);
    }
    
    
    
    if (bDrawMessage){
        ofSetColor(0, 0, 0);
        ofDrawBitmapString("Use the arrow keys to change the position of a dot.\nUse tab key to move the dot right with a big jump.\nOnce you have done moving a dot you can fix it\nin one potision with the return key.\nAnd then you will be able to start moving the next dot.\n\nnote:You cannot choose which dot you move.\n     JUST FOLLOW THE NATURE.\n     To delete this message, press 'd'.", 50,650);
    }
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    switch (key){
            
            
            case OF_KEY_LEFT:
                pts[noD].x -= 3;
                break;
            
            case OF_KEY_RIGHT:
                pts[noD].x += 3;
                break;
            
            case OF_KEY_UP:
                pts[noD].y -= 3;
                break;
            
            case OF_KEY_DOWN:
                pts[noD].y += 3;
                break;
            
            case OF_KEY_TAB:
                pts[noD].x += 10;
                break;
            
            case OF_KEY_RETURN:
                noD += 1;
                break;
            

            
            
    }

    
    
    if (key == 'd'){
        bDrawMessage = !bDrawMessage;
    }

    
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
