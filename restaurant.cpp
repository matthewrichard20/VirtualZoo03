//
//  restaurant.cpp
//  Final1
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <stdio.h>
#include "restaurant.h"

Restaurant:: Restaurant()
{
  facility_type = 'r';
  code = 'R';
}

void Restaurant::DisplayFood()
{
  cout << "Kami menjual nasi goreng, ayam goreng, dsbnya" << endl;
}
