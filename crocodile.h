#ifndef CROC_H
#define CROC_H

#include "reptile.h"

/** @class Crocodile
  * Kelas Crocodile untuk membuat hewan buaya
  */
class Crocodile : public Reptile {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas buaya
     * @param w Nilai untuk berat badan hewan*/
    Crocodile(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas buaya*/
    ~Crocodile();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan buaya*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};


#endif
