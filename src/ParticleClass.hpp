//
//  ParticleClass.hpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-03.
//
//

#ifndef ParticleClass_hpp
#define ParticleClass_hpp

#include "ofMain.h"

class Particle {
    
public:
    void generate(float _size, float _originX, float originY);
    void update();
    void draw();
    
    
    float size;
    ofVec2f origin;
    ofVec2f location;
    
    
};

#endif /* ParticleClass_hpp */
