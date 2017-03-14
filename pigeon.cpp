#include <iostream>
#include <string>
#include "pigeon.h"

using namespace std;

Pigeon :: Pigeon(int w) : Aves(w)
{
  diet = new Herbivore(40);
  habitat = new char[2];
  habitat[0] = 'a';
  habitat[1] = '0';
  code='p';
  name = "Burung merpati";
  sound = "Krrrr... Krrrr....";
  tame = true;
  is_animal = true;
}
    
Pigeon :: ~Pigeon()
{
  delete diet;
  delete habitat;
}
    
void Pigeon :: Interact()
{
  cout << "Burung dara cukup sulit untuk di pegang, ia akan terbang ketika kita mendekat." << endl;
  cout << "Namun burung dara akan mendekat ketika ada makanan di dekatnya." << endl;
  Talk();
}

void Pigeon :: AnimalDescription()
{
  cout << "Burung merpati terdapat di seluruh duniam namun varietas terbesar terdapat di indomaata." << endl;
  cout << "Burung merpati membangun sangkarnya dari ranting dan sisa-sisa lainnya." << endl;
}
