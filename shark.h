#ifndef SHARK_H
#define SHARK_H

#include "pisces.h"

/** @class Shark
  * Kelas Shark untuk membuat hewan hiu
  */

class Shark : public Pisces {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas hiu
     * @param w Nilai dari berat badan hiu*/
    Shark(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas hiu*/
    ~Shark();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan hiu*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
