#ifndef CENDRA_H
#define CENDRA_H

#include "aves.h"


/** @class Cendrawasih
  * Kelas Cendrawasih untuk membuat hewan cendrawasih
  */
class Cendrawasih : public Aves {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas cendrawasih
     * @param w Nilai berat badan dari hewan cendrawasih*/
    Cendrawasih(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas cendrawasih*/
    ~Cendrawasih();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan cendrawasih*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
