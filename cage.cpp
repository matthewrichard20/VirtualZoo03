//
//  cage.cpp
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "cage.h"

Cage::Cage()
{
  penghuni = nAnimal;
}

bool Cage::isAvailable()
{
  return penghuni !=nAnimal;
}

Animal& Cage::getAnimal()
{
  return penghuni;
}

void Cage::setAnimal(Animal &x)
{
  penghuni = x;
  
}
