#include <stdio.h>
#include "zoo.h"

// @brief Ctor
Zoo::Zoo(){
  map = new Cell*[defaultSize];
  for(int i = 0; i < defaultSize ; i++){
        map[i] = new Cell[defaultSize];
    }
}
// @brief Ctor with paramaters
Zoo(int p, int l){
  map = new Cell*[p];
  for(int i = 0; i < p ; i++){
        map[i] = new Cell[l];
    }
}
// @brief Dtor
Zoo::~Zoo(){
  for(int i = 0; i < y; i++){
    delete [] map[i];
  }
  delete [] map;
}
// @brief mengubah cell
void Zoo::SetCell(Cell c, int x , int y){
  map[x][y].Get
}
// @brief memindahkan hewan
void Zoo::MoveAnimal(int x, int y , int to){
  int tox=x;
  int toy=y;
  int count = 0;
  bool moved = false;
  while ((!moved) && (count<4)){
    count++;
    switch (to){
      case 1 :
        tox++;
        break;
      case 2:
        toy++;
        break;
      case 3:
        tox--;
        break;
      case 4:
        toy--;
        break;
        }
    if (CanMoveAnimal(x,y,tox,toy)){
      map[tox][toy].setAnimal(map[x][y].getAnimal);
      moved = true;
    } else {
      to = (to % 4) + 1;
    }
  }
}
// @brief mengecek apakah bisa memindahkan hewan
bool Zoo::CanMoveAnimal(int fromx, int fromy, int tox, int toy)
{
  return (map[fromx][fromy]== map[tox][toy]) && (map[tox][toy].isCageEmpty);
}
