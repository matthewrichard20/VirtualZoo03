#ifndef pisces_h
#define pisces_h

#include "animal.h"
class Pisces : public Animal{
	public:
    
    /**@brief Constructor
     * alokasi untuk pisces 
     * @param w , berat dari berat badan hewan pisces*/
    Pisces(int w);
    
		/**@brief Interaksi.
		 * Berinteraksi dengan hewan pisces*/
		virtual void Interact()=0;
		
		/**@brief Feed.
		 * Memberi makan hewan pisces*/
		virtual void Feed()=0;
		
		/**@brief Description.
		 * Menjelaskan secara umum tentang hewan tersebut*/
		void Description();
		
		/**@brief AnimalDescription.
		 * Menjelaskan secara khusus tentang hewan*/
		virtual void AnimalDescription()=0;
};
#endif
