//
//  WebOfLinesClass.hpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-13.
//
//

#ifndef WebOfLinesClass_hpp
#define WebOfLinesClass_hpp

#include "ofMain.h"


// this "Line" class is needed within the WebOfLines class
class Line {
public:
    ofPoint a;
    ofPoint b;
};

class WebOfLines {
public:
    void drawWeb();
    void createWeb(int x, int y);
    
    
    vector <ofPoint> drawnPoints; // an array to store all the mouse locations when left button is clicked
    vector <Line> lines;  // an array of Line objects
    
    
    
};



#endif /* WebOfLinesClass_hpp */
