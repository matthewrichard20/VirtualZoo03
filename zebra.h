#ifndef ZEBRA_H
#define ZEBRA_H

#include "mammal.h"

/** @class Zebra.
  * Kelas Zebra untuk membuat hewan zebra
  */

class Zebra : public Mammal {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas zebra
     * @param w Nilai dari berat badan hewan zebra*/
    Zebra(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas zebra*/
    ~Zebra();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan zebra*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
