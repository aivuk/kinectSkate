#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"
#include "ofParticles.h"


class ofBackEffects{
    
public:
    ofBackEffects();
    ~ofBackEffects();
    
    void setup();
    void reset();
    void update(vector <ofPtr<ofxBox2dRect> > boxes);
    void draw();
    void updateAttractPoints(vector <ofPtr<ofxBox2dRect> > boxes);
    void addAttractPoints(ofPoint pos);
    
private:
    //background particles
    
    void resetParticles();

    vector <ofParticles> p;
    vector <ofPoint> attractPoints;
    vector <ofPoint> attractPointsWithMovement;
    
    particleMode currentMode;
    string currentModeStr;
    


};