#ifndef STINGR_H
#define STINGR_H

#include "pisces.h"

/** @class StingRay.
  * Kelas StingRay untuk membuat hewan ikan pari
  */

class StingRay : public Pisces {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas pari
     * @param w Nilai dari berat badan ikan pari*/
    StingRay(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas pari*/
    ~StingRay();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan pari*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
