#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    HEIGHT = ofGetWindowHeight();
    WIDTH = ofGetWindowWidth();
    
    
    numberOfRows = 10;
    int gridSize = ofGetWindowWidth()/numberOfRows;
    int gridX = ofGetWindowWidth()/numberOfRows;
    int gridY = ofGetWindowHeight()/numberOfRows;
    
//    for (int i = 0; i < numberOfRows; i++) {
//        particle.generate(10, gridX, gridY);
//        particleArray.push_back(particle);
//        gridX = gridX + gridSize;
//    }
    
    ofBackground(77, 77, 77);
    
    line.build(WIDTH, HEIGHT);
    
    swarm.resize(1000);
    
    for (int i = 0; i < swarm.size(); i++) {
        swarm[i].build(WIDTH, HEIGHT);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    line.draw();
//    web.drawWeb();
    
    for (int i = 0; i < swarm.size(); i++) {
        swarm[i].draw();
    }
}

void ofApp::mouseDragged(int x, int y, int button){
//    web.createWeb(x, y);
//  call attractor class here
}







