#ifndef CELL_H
#define CELL_H
#include "renderable.h"
#include "animal.h"
#include "cage.h"

using namespace std;

/** @class Cell
  * Kelas Cell untuk membuat cell
  */
class Cell : public Renderable{
  public:
    /** @brief GetAnimal
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/ 
    virtual Animal* GetAnimal();
    
    /** @brief SetAnimal
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void SetAnimal(Animal *x);
    
    
    /**@brief GetHabitat.
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual char GetHabitat();
    
    /**@brief IsCageAvailable.
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual bool IsCageAvailable();
   
    
    /** @brief GetCage
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/ 
    virtual Cage* GetCage();
    
	/**@brief PurifyAir
	 * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void PurifyAir();
    
    /**@brief CleanNet
     * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void CleanNet();
    
    
    /**@brief waterTree.
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void WaterTree();
    
    /**@brief plantTree. 
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void PlantTree();
    
    /**@brief trimGrass.
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child */
    virtual void TrimGrass();
    
    /**@brief cleanWater
     * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void CleanWater();
    
    /**@brief putWPlant
     * Fungsi virtual dummy agar dapat digunakan oleh kelas childr*/
    virtual void PutWPlant();
    
    /**@brief putRock
     * Fungsi virtual dummy agar dapat digunakan oleh kelas child */
    virtual void PutRock();
    
    char Render();
		
	protected:
		char code;
	
};

#endif
