#ifndef ZOO_H
#define ZOO_H
#include "cell.h"
#include "cage.h"
#include "habitat.h"
#include "water.h"
#include "air.h"
#include "land.h"
#include "route.h"
#include "restaurant.h"
#include "park.h"
#include "gate.h"

class Zoo{
public:
  /** @brief Ctor with parameters
   */
  Zoo(int p, int l);
  
  /** @brief Dtor
   */
  ~Zoo();
  
  /** @brief mengubah cell
   */
  void SetCell(char c, int x , int y);
  
  /** @brief memindahkan hewan
   */
  void MoveAnimal(int x, int y);
  
  /**@brief mengecek apakah bisa memindahkan hewan
   */
  bool CanMoveAnimal(int fromx, int fromy, int tox, int toy);
private:
  Cell ***map;
  const int panjang;
  const int lebar;
};

#endif
