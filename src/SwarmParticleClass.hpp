//
//  SwarmParticleClass.hpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-13.
//
//

#ifndef SwarmParticleClass_hpp
#define SwarmParticleClass_hpp

#include "ofMain.h"

class SwarmParticle {
public:
    void build(float windowWidth, float windowHeight);
    void update();
    void draw();
    
    
    ofVec2f position;  // current position
    ofVec2f prevPosition; // previous position
    
    float stepSize;
    float angle; // direction of object
    
    bool isOutside = false;  // if object is outside window
    
    float windowWidth = ofGetWindowWidth();
    float windowHeight = ofGetWindowHeight();
    
};

class BasicAttractor {
public:
    void attract();
    
};

#endif /* SwarmParticleClass_hpp */



/*

 To build an array of SwarmParticles ie. a "Swarm" do this...
 
 
 
 vector <SwarmParticle> swarm;
 
 swarm.resize(1000);
 
 for (int i = 0; i < swarm.size(); i++) {
    swarm[i].build(WIDTH, HEIGHT);
 }
 
 
 
 -------------------------------------------
 
 DRAWING EACH OBJECT IN SWARM
 
 for (int i = 0; i < swarm.size(); i++) {
    swarm[i].draw();
 }
 
 
*/
