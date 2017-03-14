#ifndef SNAKE_H
#define SNAKE_H

#include "reptile.h"

/** @class Snake.
  * Kelas Snake untuk membuat hewan ular
  */
class Snake : public Reptile {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas ular
     * @param w Nilai dari berat badan ular*/
    Snake(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas ular*/
    ~Snake();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan ular*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
