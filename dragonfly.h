#ifndef DRAGONF_H
#define DRAGONF_H

#include "insect.h"

/** @class Dragonfly
  * Kelas Dragonfly untuk membuat hewan capung
  */
class Dragonfly : public Insect {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas capung
     * @param w Nilai berat badan dari capung*/
    Dragonfly(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas capung*/
    ~Dragonfly();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan capung*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
