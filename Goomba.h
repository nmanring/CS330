/*
 *  Goomba.h
 *  Game
 *
 *  Created by David Reed, Matt Oldfield, Jeremy Sampson, Andrew Daugherty
 *  and Alex Martishius
 *  Copyright 2011. All rights reserved.
 *
 */


#ifndef __GOOMBA_H__
#define __GOOMBA_H__

//---------------------------------------------------------

#include "Movable.h"

//---------------------------------------------------------

class Goomba: public Movable {
    
public:
	// openGL draw method
    virtual void draw();
	
    // constructor
    Goomba();
    // destructor
    ~Goomba();
    
    // instance vars
    
    // horizontal and vertical velocities
    double horizontalVelocity_, verticalVelocity_;
    
    // methods
    

    
};

//---------------------------------------------------------

#endif // _TURTLE_H