//
//  habitat.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef habitat_h
#define habitat_h

#include "cell.h"
#include "cage.h"

/** @class Habitat
  * Kelas Habitat untuk membentuk habitat
  */

class Habitat : public Cell
{
public:
    /**@brief Constructor.
      * Mengkonstruksi kelas Habitat
      * @param make_cage Nilai boolean yang menyatakan habitat tersebut merupakan cage atau bukan*/
    Habitat (bool make_cage);
    
    /**@brief Destructor.
      *Mengdealokasi parameter dari habitat*/
    ~Habitat();
    
    /**@brief GetHabitat.
      *Mengambil tipe dari habitat, land, air atau water*/
    char GetHabitat();
  
  /**@brief GetCage.
   *Mengambil cage*/
    Cage& GetCage();
  
    /**@brief IsCageAvailable.
      * Memeriksa apakah habitat tersebut merupakan cage atau bukan*/
    bool IsCageAvailable();
    
protected :
    Cage *nil_cage = NULL ;
    Cage *cage;
    char habitat;
};


#endif /* habitat_h */
