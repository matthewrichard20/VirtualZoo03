#ifndef omnivore_h
#define omnivore_h

#include "diet_type.h"


/** @class Omnivore
  * Kelas Omnivore untuk membuat hewan dengan diet type omnivora
  */

class Omnivore : public DietType{
  public:
    /**@brief Constructor.
     * Constructor tanpa parameter*/
    Omnivore();
   
    /**@brief Constructor.
     * Constructor dengan parameter*/
    /**@param p porsi yang dibutuhkan oleh suatu animal*/
    Omnivore(int p);
    
    /**@brief feed.
     * Memberi makan hewan berdasarkan jenis makanannya
     * @param feed Nilai dari banyaknya makanan yang diberikan*/
    void Feeds(int feed);
    
    
};

#endif /* omnivore_h */
