#include <iostream>
#include <string>
#include "tiger.h"

using namespace std;

Tiger :: Tiger(int w) : Mammal(w){
  diet = new Carnivore(90);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = '0';
  name = "Harimau";
  sound = "ROAR!!";
  tame = false;
  is_animal = true;
}
    
Tiger :: ~Tiger()
{
  delete diet;
  delete habitat;
}
    
void Tiger :: Interact()
{
  cout << "Harimau sedang bermain dengan teman se spesiesnya." << endl;
  cout << "Mereka bermain kejar kejaran hingga terguling guling." << endl;
  Talk();
}
    
void Tiger :: AnimalDescription()
{
  cout << "Harimau adalah jenis kucing terbesar dari spesiesnya, bahkan lebih besar dari singa." << endl;
  cout << "Harimau juga adalah kucing tercepat kedua dalam berlari setelah citah." << endl;
  cout << " Dalam keseluruhan karnivora, harimau adalah kucing karnivora terbesar dan "<< endl;
  cout << "karnivora terbesar ketiga setelah beruang kutub." << endl;
}

