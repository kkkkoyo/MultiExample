#include "SceneA.h"

//--------------------------------------------------------------
void SceneA::setup(){

}

//--------------------------------------------------------------
void SceneA::update(){
    
}

//--------------------------------------------------------------
void SceneA::draw(){
    ofBackground(0, 0, 0);//背景色
    ofEnableAlphaBlending();//透明度を使用可能に
    //ofSetColor(100, 0, 0);
    ofDrawBitmapString("Scene A", 20, 20);
}
