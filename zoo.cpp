#include <stdio.h>
#include "zoo.h"

// @brief Ctor
Zoo::Zoo():x(default_size),y(default_size){
  map = new Cell*[default_size];
  for(int i = 0; i < default_size ; i++){
    map[i] = new Cell[default_size];
  }
}
// @brief Ctor with paramaters
Zoo::Zoo(int p, int l): x(l),y(p){
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
        map[tox][toy].cage.setAnimal(map[x][y].cage.getAnimal());
        moved = true;
      } else {
        to = (to % 4) + 1;
      }
  }
}
// @brief mengecek apakah bisa memindahkan hewan
bool Zoo::CanMoveAnimal(int fromx, int fromy, int tox, int toy)
{
  if ((map[fromx][fromy].GetCode() == 'h') &&(map[tox][toy].GetCode() == 'h')){
  return (map[fromx][fromy].GetHabitat() == map[tox][toy].GetHabitat() ) && (map[tox][toy].IsCageEmpty);
  }
}
