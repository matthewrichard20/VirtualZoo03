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
    void WaterTree();
    
    /**@brief plantTree. 
      *menanam pohon*/
    void PlantTree();
    
    /**@brief trimGrass.
      *memotong rumput */
    void TrimGrass();
};

#endif /* land_h */
