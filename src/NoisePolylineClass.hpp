//
//  NoisePolylineClass.hpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-13.
//
//

#ifndef NoisePolylineClass_hpp
#define NoisePolylineClass_hpp

#include "ofMain.h"


class NoisePolyline {
    
public:
    void build(float width, float height);
    void update();
    void showVertices();
    void draw();
    
    // noise polyline class
    ofPolyline line;
    

    
};


#endif /* NoisePolylineClass_hpp */
