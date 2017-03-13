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
    cell_code = 'h';
  if (make_cage)
    {
        cage = new Cage;
        
    }
    else
    {
        cage = nil_cage;
    }
    
}

Habitat::~Habitat()
{
    delete cage;
}
char Habitat::GetHabitat()
{
    return habitat;
}
Cage& Habitat::GetCage(){
  return *cage;
}
bool Habitat::IsCageAvailable()
{
    return ((cage!=NULL) && (cage->IsCageEmpty()));
}
