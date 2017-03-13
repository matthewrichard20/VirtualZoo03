#include <stdio.h>
#include "zoo.h"

// @brief Ctor with paramaters
Zoo::Zoo(int p, int l) :panjang(p), lebar(l){
  map =new Cell**[panjang];
  for(int i = 0; i < panjang ; i++){
    map[i] = new Cell*[l];
  }
}
// @brief Dtor
Zoo::~Zoo(){
  for(int i = 0; i < panjang; i++){
    delete [] map[i];
  }
  delete [] map;
}
// @brief mengubah cell
void Zoo::SetCell(char c, int i , int j){
  switch (c) {
      
       case ('-') : map[i][j] = new Route(); break;
       case ('W') : map[i][j] = new Water(true); break;  //ada cage, inisialisasi pointer cage
       case ('F') : map[i][j] = new Air(true); break;  //ada cage, inisialisasi pointer cage
       case ('L') : map[i][j] = new Land(true); break;  //ada cage, inisialisasi pointer cage
       case ('w') : map[i][j] = new Water(false); break;  //habitat aja
       case ('f') : map[i][j] = new Air(false); break;  //habitat aja
       case ('l') : map[i][j] = new Land(false); break;  //habitat aja
       case ('P') : map[i][j] = new Park(); break;
       case ('R') : map[i][j] = new Restaurant(); break;
       case ('E') : map[i][j] = new Gate('e'); break;
       case ('X') : map[i][j] = new Gate('x'); break;
      
  }
}
// @brief memindahkan hewan
void Zoo::MoveAnimal(int x, int y){
  int to = (rand()%4)+1;
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
      map[x][y]->
      map[tox][toy]->GetCage().setAnimal(map[x][y]->GetCage().getAnimal());
      map[x][y]->GetCage().ClearAnimal();
      moved = true;
    } else {
      to = (to % 4) + 1;
    }
  }
}
// @brief mengecek apakah bisa memindahkan hewan
bool Zoo::CanMoveAnimal(int fromx, int fromy, int tox, int toy)
{
  if ((map[fromx][fromy]->GetCode() == 'h') && (map[fromx][fromy]->GetCode() == 'h')){
    return ((map[fromx][fromy]->GetHabitat() == map[tox][toy]->GetHabitat()) && (map[tox][toy]->IsCageAvailable()));
  }
  
}
