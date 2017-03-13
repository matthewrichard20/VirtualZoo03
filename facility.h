#ifndef FACILITY_H
#define FACILITY_H

#include "cell.h"
/** @class Facility
 * Kelas Facility untuk membuat fasilitas yang ada di zoo
 */

class Facility : public Cell{
public:
		/**@brief Constructor.
     *Mengkonstruksi kelas Facility */
		Facility();
		/**@brief Destructor.
     *Mengdealokasi parameter dari kelas facility */
		~Facility();
		
protected:
		char facility_type;
};

#endif
