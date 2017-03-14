#ifndef CLOWNF_H
#define CLOWNF_H

#include "pisces.h"


/** @class clownFish
  * Kelas clownFish untuk membuat hewan ikan badut
  */
class clownFish : public Pisces {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas ikan badut
     * @param w Nilai berat badan dari ikan badut*/
    clownFish(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas ikan badut*/
    ~clownFish();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan ikan badut*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
