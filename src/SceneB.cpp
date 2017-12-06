#include "SceneB.h"

//--------------------------------------------------------------
void SceneB::setup(){

}

//--------------------------------------------------------------
void SceneB::update(){
    
}

//--------------------------------------------------------------
void SceneB::draw(){
    ofBackground(0, 100, 0);//背景色
    ofEnableAlphaBlending();//透明度を使用可能に
    //ofSetColor(100, 0, 0);
    ofDrawBitmapString("Scene B", 20, 20);
}
