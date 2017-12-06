#include "SceneC.h"

//--------------------------------------------------------------
void SceneC::setup(){
}

//--------------------------------------------------------------
void SceneC::update(){
    
}

//--------------------------------------------------------------
void SceneC::draw(){
    ofBackground(0, 0, 100);//背景色
    ofEnableAlphaBlending();//透明度を使用可能に
    //ofSetColor(100, 0, 0);
    ofDrawBitmapString("Scene C", 20, 20);
}
