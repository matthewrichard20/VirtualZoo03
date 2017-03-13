
#include "facility.h"
/** @class Restaurant
  * Kelas Restaurant untuk membuat restaurant
  */
class Restaurant: public Facility{
	public:
  
  Restaurant();
  
  void DisplayFood();
	
	private:
  
  char x[20];
};
