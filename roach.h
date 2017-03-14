#ifndef ROACH_H
#define ROACH_H

#include "insect.h"

/** @class Roach.
  * Kelas Roach untuk membuat hewan kecoak
  */

class Roach : public Insect {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas kecoak
     * @param w Nilai dari berat badan kecoak*/
    Roach(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas kecoak*/
    ~Roach();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan kecoak*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
