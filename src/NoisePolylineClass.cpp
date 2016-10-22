//
//  NoisePolylineClass.cpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-13.
//
//

#include "NoisePolylineClass.hpp"

void NoisePolyline::build(float width, float height) {
    
    for (float x = 10; x < width; x += 10) {
        float noiseX = ofMap(x, 0, width, 0, 5); // you need to get a value between 0.0...1.0 for the ofNoise() function
        float y = ofNoise(noiseX) * height;
        ofPoint pt;
        pt.set(x, y);
        line.addVertex(pt);
    }
}

void NoisePolyline::draw() {
    ofSetColor(255);
    line.draw();
}

void NoisePolyline::showVertices() {
    
}
