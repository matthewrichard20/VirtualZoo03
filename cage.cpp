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

bool Cage::IsCageEmpty()
{
  return penghuni !=nAnimal;
}

Animal* Cage::GetAnimal()
{
  return penghuni;
}

void Cage::SetAnimal(Animal *x)
{
  penghuni = x;
  
}
