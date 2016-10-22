//
//  SwarmParticleClass.cpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-13.
//
//

#include "SwarmParticleClass.hpp"


void SwarmParticle::build(float windowWidth, float windowHeight) {
    
    // set the position to a random value within the window
    position.set(ofRandom(windowWidth), ofRandom(windowHeight));
    
    // prevPosition will be a constant
    prevPosition.set(position.x, position.y);
    
    stepSize = ofRandom(1, 5);
    
}

void SwarmParticle::update() {
    
    
    
    
}

void SwarmParticle::draw() {
    
    angle = ofNoise(position.x, position.y);
    position.x += cos(angle) * stepSize;
    position.y += sin(angle) * stepSize;
    
    
    // checking to see if object is outside window dimesnions
    if (position.x < 0) {
        isOutside = true;
    }
    else if (position.x > windowWidth) {
        isOutside = true;
    }
    else if (position.y < 0) {
        isOutside = true;
    }
    else if (position.y > windowHeight) {
        isOutside = true;
    }
    
    // if object is outside window return it to a random location
    if (isOutside == true) {
        position.x = ofRandom(windowWidth);
        position.y = ofRandom(windowHeight);
        prevPosition.set(position.x, position.y);
    }
    
    
    // DRAWING THE LINES
    ofSetLineWidth(1);
    ofDrawLine(prevPosition.x, prevPosition.y, position.x, position.y);
    prevPosition.set(position.x, position.y);
    isOutside = false;
    
}
