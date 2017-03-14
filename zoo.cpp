#include <stdio.h>
#include <fstream>
#include "zoo.h"
#include "water.h"
#include "land.h"
#include "air.h"
#include "route.h"
#include "gate.h"
#include "restaurant.h"
#include "park.h"
using namespace std;

// @brief Ctor with paramaters
Zoo::Zoo(int _p, int _l) : p(_p) , l(_l){
  map = new Cell**[p];
  for(int i = 0; i < p ; i++){
        map[i] = new Cell*[l];
  }
  animal = new Animal*[40];
}
// @brief Dtor
Zoo::~Zoo(){
  for(int i = 0; i < p; i++){
    delete [] map[i];
  }
  delete [] map;
}
// @brief mengubah cell
void Zoo::SetCell(char c, int i , int j){
	switch (c) {
	    case ('-') : map[i][j] = new Route; break;
        case ('W') : map[i][j] = new Water(true); break; // ada cage, inisialisasi pointer cage
        case ('F') : map[i][j] = new Air(true); break; // ada cage, inisialisasi pointer cage
        case ('L') : map[i][j] = new Land(true); break; // ada cage, inisialisasi pointer cage
        case ('w') : map[i][j] = new Water(false); break; // habitat aja
        case ('f') : map[i][j] = new Air(false); break; // habitat aja
        case ('l') : map[i][j] = new Land(false); break; // habitat aja
        case ('P') : map[i][j] = new Park; break;
        case ('R') : map[i][j] = new Restaurant; break;
        case ('E') : map[i][j] = new Gate('E'); break;
        case ('X') : map[i][j] = new Gate('X'); break;
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
      map[tox][toy]->GetCage()->SetAnimal(map[x][y]->GetCage()->GetAnimal());
      map[x][y]->GetCage()->ClearAnimal();
      moved = true;
    } else {
      to = (to % 4) + 1;
    }
  }
}
/** @brief mengecek apakah bisa memindahkan hewan
 *  prekondisi, map[fromx][fromy] adalah habitat dengan cage
 */
bool Zoo::CanMoveAnimal(int fromx, int fromy, int tox, int toy)
{
  return ((map[fromx][fromy]->Render() == map[tox][toy]->Render()) && (map[tox][toy]->IsCageAvailable()));
}

Cell* Zoo::GetCell(int i, int j)
{
  return map[i][j];
}
int Zoo::GetPanjang(){
	return p;
}

int Zoo::GetLebar(){
	return l;
}



