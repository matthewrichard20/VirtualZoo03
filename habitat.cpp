//
//  habitat.cpp
//  Final1
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "habitat.h"

Habitat::Habitat (bool make_cage)
{
    if (make_cage)
    {
        cage = new Cage;
        
    }
    else
    {
        cage = nil_cage;
    }
    
}

Habitat::~Habitat(){
	delete cage;
}

bool Habitat::IsCageAvailable()
{
    return ((cage!=nil_cage) && (cage->IsCageEmpty()));
}

Cage* Habitat::GetCage(){
	return cage;
}

char Habitat::GetHabitat(){
	return code;
}
