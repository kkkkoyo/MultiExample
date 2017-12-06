#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){

    
    ofSetFrameRate(60);
    
    //動的シーンの新規生成, 配列に追加
    base * sa = new SceneA();
    scenes.push_back(sa);
    
    base * sb = new SceneB();
    scenes.push_back(sb);
    
    base * sc = new SceneC();
    scenes.push_back(sc);
    
    //現在のシーンを0に
    nowScene = 0;
    scenes[nowScene]->setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    scenes[nowScene]->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    scenes[nowScene]->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case ' ':
            nowScene++;
            nowScene %= scenes.size();
            scenes[nowScene]->setup();
            break;
        case 'f':
            ofToggleFullscreen();
            break;
        default:
            break;
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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

