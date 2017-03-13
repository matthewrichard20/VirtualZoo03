//
//  land.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef land_h
#define land_h

#include "habitat.h"


/** @class Land
  * Kelas Land untuk membuat habitat dengan tipe land
  */
class Land : public Habitat
{
public:
  /**@brief Constructor.
      *Mengkonstruksi habitat tipe land
      *@param make_cage */
    Land(bool make_cage);
    
    /**@brief waterTree.
      *Menyirami pohon*/
    void waterTree();
    
    /**@brief plantTree. 
      *menanam pohon*/
    void plantTree();
    
    /**@brief trimGrass.
      *memotong rumput */
    void trimGrass();
};

#endif /* land_h */
