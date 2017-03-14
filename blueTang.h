#ifndef BLUETANG_H
#define BLUETANG_H

#include "pisces.h"


/** @class BlueTang
  * Kelas BlueTang untuk membuat hewan blue tang atau ikan dory
  */
class BlueTang : public Pisces {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas ikan blue tang
     * @param w Nilai berat badan dari ikan blue tang*/
    BlueTang(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas ikan blue tang*/
    ~BlueTang();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan ikan blue tang*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
