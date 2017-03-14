#ifndef LION_H
#define LION_H

#include "mammal.h"

/** @class Lion
  * Kelas Lion untuk membuat hewan singa
  */
class Lion : public Mammal {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas singa 
     * @param w Nilai berat badan dari singa*/
    Lion(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas singa*/
    ~Lion();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan singa*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
