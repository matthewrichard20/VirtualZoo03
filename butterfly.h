#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include "insect.h"


/** @class Butterfly
  * Kelas Butterfly untuk membuat hewan kupu kupu
  */
class Butterfly : public Insect {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas kupu-kupu
     * @param w Nilai berat badan dari kupu-kupu*/
    Butterfly(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas kupu-kupu*/
    ~Butterfly();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan kupu-kupu*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
