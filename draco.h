#ifndef DRACO_H
#define DRACO_H

#include "reptile.h"

/** @class Draco
  * Kelas Draco untuk membuat hewan iguana terbang
  */

class Draco : public Reptile {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas bunglon terbang
     * @param w Nilai berat badan dari iguana terbang*/
    Draco(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas bunglon terbang*/
    ~Draco();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan bunglon terbang*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
