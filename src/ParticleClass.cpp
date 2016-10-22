//
//  ParticleClass.cpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-03.
//
//

#include "ParticleClass.hpp"

void Particle::generate(float _size, float _originX, float _originY) {
    size = _size;
    origin.set(_originX, _originY);
    location = origin;
}

void Particle::update() {
    
}

void Particle::draw() {
    ofSetColor(238, 238, 0);
    ofFill();
    ofDrawEllipse(location.x, location.y, size, size);
}
