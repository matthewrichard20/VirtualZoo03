#ifndef BAT_H
#define BAT_H

#include "mammal.h"

class Bat : public Mammal {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas kelelawar*/
    Bat(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas kelelawar*/
    ~Bat();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan kelelawar*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
