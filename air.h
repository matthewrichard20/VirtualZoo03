//
//  air.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef air_h
#define air_h

#include "habitat.h"

/** @class Air
  * Kelas Air untuk membuat habitat udara (air habitat)
  */

class Air : public Habitat
{
	public:
	/**@brief Constructor
	 * Mengalokasi parameter-parameter Air
	 * @param make_cage Status bahwa dalam habitat Air adalah cage atau bukan*/
    Air(bool make_cage);
   
	/**@brief PurifyAir
	 * Membersihkan udara dalam kandang*/
    void PurifyAir();
    
    /**@brief CleanNet
     * Membersihkan jaring*/
    void CleanNet();
    
    
};

#endif /* air_h */
