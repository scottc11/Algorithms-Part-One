//
//  WebOfLinesClass.cpp
//  Algorithms-Part-One
//
//  Created by Scott Campbell on 2016-10-13.
//
//

#include "WebOfLinesClass.hpp"

void WebOfLines::createWeb(int x, int y) {
    for (auto point : drawnPoints){
        ofPoint mouse;
        mouse.set(x,y);
        float dist = (mouse - point).length();
        if (dist < 30){
            Line lineTemp;
            lineTemp.a = mouse;
            lineTemp.b = point;
            lines.push_back(lineTemp);
        }
    }
    drawnPoints.push_back(ofPoint(x,y));
}

void WebOfLines::drawWeb() {
    ofEnableAlphaBlending();
    ofSetColor(30,30,30,30);
    
    for (auto line : lines) {
        ofDrawLine(line.a, line.b);
    }
}
