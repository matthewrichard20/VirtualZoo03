#include <iostream>
#include <string>
#include "swan.h"

using namespace std;

Swan :: Swan(int w) : Aves(w){
  diet = new Herbivore(80);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = 'w';
  name = "Angsa";
  sound = "honk";
  tame = true;
  is_animal = true;
}
    
Swan :: ~Swan()
{
  delete diet;
  delete habitat;
}
    
void Swan :: Interact()
{
  cout << "Angsa berenang renang dengan indahnya di danau" << endl;
  cout << "Mereka berkumpul bersama temannya, berenang kesana kemari." << endl;
  Talk();
}

void Swan :: AnimalDescription()
{
  cout << "Angsa adalah burung air berukuran dari genus cygnus famili anatidae. " << endl;
  cout << " Angsa umumnya terdapat di daerah beriklim sedang, jarang terdapat di daerah tropis." << endl;
}
