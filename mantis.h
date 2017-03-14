#ifndef MANTIS_H
#define MANTIS_H

#include "insect.h"

/** @class Mantis
  * Kelas Mantis untuk membuat hewan belalang sembah
  */
class Mantis : public Insect {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas belalang
     * @param w Nilai untuk berat badan belalang*/
    Mantis(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas belalang*/
    ~Mantis();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan belalang*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
