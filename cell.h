#ifndef CELL_H
#define CELL_H
#include <iostream>
#include "cage.h"
using namespace std;

/** @class Cell
  * Kelas Cell untuk membuat cell
  */
class Cell{
	public:
//		/** @brief Constructor.
//		  * Mengkonstruksi cell*/
//		Cell();
  virtual char GetCode();
//  virtual char GetHabitat() = 0;
//  virtual bool IsCageAvailable() = 0;
//  virtual Cage& GetCage() = 0;
	protected:
		char cell_code;
	
};

#endif
