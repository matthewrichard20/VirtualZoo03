//
//  water.cpp
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "water.h"

using namespace std;
Water::Water(bool make_cage) : Habitat(make_cage)
{
   habitat = 'w';
}

void Water::CleanWater()
{
    cout << "The water is being cleaned" << endl;
}
void Water::PutWPlant()
{
    cout << "Putting water plant in the water" << endl;
}
void Water::PutRock()
{
    cout << "Putting rock in the water" << endl;
}
