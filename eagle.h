#ifndef AEAGLE_H
#define AEAGLE_H

#include "aves.h"

/** @class Eagle
  * Kelas Eagle untuk membuat hewan elang
  */

class Eagle : public Aves {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas elang
     * @param w Nilai berat badan dari elang*/
    Eagle(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas elang*/
    ~Eagle();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan elang*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
