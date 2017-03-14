//
//  cage.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef cage_h
#define cage_h
#include "animal.h"
class Cage

/** @class Cage
  * Kelas Cage untuk membuat kandang
  */    
    
{
public:
    /** @brief Constructor.
      * Mengkonstruksi kandang*/
    Cage();
    
    /** @brief IsCageEmpty
      * Mengembalikan nilai true jika kandang masih belum terisi hewan*/
    bool IsCageEmpty();
    
    /** @brief GetAnimal
      * Melihat hewan apa yang ada di cage tertentu*/ 
    Animal* GetAnimal();
    
    /** @brief SetAnimal
      * Meletakkan hewan di cage tertentu*/
    void SetAnimal(Animal *x);
    
    Animal *nAnimal = NULL;
private:
    Animal *penghuni;
    
};

#endif /* cage_h */
