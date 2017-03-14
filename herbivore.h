//
//  herbivore.h
//  Header
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef herbivore_h
#define herbivore_h

#include "diet_type.h"

/** @class Herbivore
  * Kelas Herbivore untuk membuat hewan dengan diet type jenis herbivora
  */

class Herbivore : public DietType{
   public:
     /**@brief Constructor.
     * Constructor tanpa parameter*/
    Herbivore();
   
    /**@brief Constructor.
     * Constructor dengan parameter*/
    /**@param p porsi yang dibutuhkan oleh suatu animal*/
    Herbivore(int p);
    
    /**@brief feed.
     * Memberi makan hewan berdasarkan jenis makanannya
     * @param feed Nilai banyaknya makanan yang diberikan kepada hewan*/
    void Feeds(int feed);
    
};

#endif /* herbivore_h */
