//
//  air.cpp
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "air.h"
using namespace std;
Air::Air(bool make_cage) : Habitat(make_cage)
{
  if (make_cage){
    code = 'F';
  }
  else{
    code = 'f';
  }
}

void Air::PurifyAir()
{
  cout << "Purifying air" << endl;
}
void Air::CleanNet()
{
  cout << "Cleaning the net" << endl;
}
