#pragma once

#include "ofMain.h"
#include "ParticleClass.hpp"
#include "NoisePolylineClass.hpp"
#include "WebOfLinesClass.hpp"
#include "SwarmParticleClass.hpp"




class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
        void mouseDragged(int x, int y, int button);

    float HEIGHT;
    float WIDTH;
    int numberOfRows;  // number of particles
    
    //Particle class
    Particle particle; // declare a particle class
    vector<Particle> particleArray;  // declare an array to hold particles
    
    // Noise Polyline Class
    NoisePolyline line;
    
    
    // Web Of Lines
    WebOfLines web;
    
    vector <SwarmParticle> swarm;

    
};
