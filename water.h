//
//  water.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef water_h
#define water_h

#include "habitat.h"

class Water : public Habitat
{
public:
  Water(bool make_cage);
    
    void cleanWater();
    
    void putWPlant();
    
    void putRock();
    
};

#endif /* water_h */
