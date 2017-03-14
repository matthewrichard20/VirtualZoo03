#ifndef reptile_h
#define reptile_h

#include "animal.h"



/** @class Reptile
  * Kelas Reptile untuk membuat hewan dengan tipe reptil
  */

class Reptile : public Animal{
	public:
    /**@brief Constructor
     * alokasi untuk reptile 
     * @param w Nilai dari berat badan hewan reptil*/
    Reptile(int w);
    
		/**@brief Interaksi.
		 * Berinteraksi dengan hewan reptile*/
		virtual void Interact()=0;
		
		/**@brief Feed.
		 * Memberi makan hewan reptile*/
		virtual void feed()=0;
		
		/**@brief Description.
		 * Menjelaskan secara umum tentang hewan tersebut*/
		void Description();
		
		/**@brief AnimalDescription.
		 * Menjelaskan secara khusus tentang hewan*/
		virtual void AnimalDescription()=0;
};

#endif

