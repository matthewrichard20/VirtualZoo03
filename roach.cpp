#include <iostream>
#include <string>
#include "roach.h"

using namespace std;

Roach :: Roach(int w) : Insect(w)
{
  diet = new Omnivore(20);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = 'a';
  code='r';
  name = "Kecoak";
  sound = "...";
  tame = true;
  is_animal = true;
}
    
Roach :: ~Roach()
{
  delete diet;
  delete habitat;
}
    
void Roach :: Interact()
{
  cout << "Kecoak menyusuri kandang yang ada dengan menggunakan kaki kaki kecilnya. " << endl;
  cout << "Kecoak terkadang menggerakkan antenanya, dan bahkan mengepakkan sayapnya untuk melayang di udara." << endl;
  Talk();
}

    
void Roach :: AnimalDescription()
{
  cout << "Kecoa terdapat hampir di seluruh belahan bumi, kecuali di wilayah kutub." << endl;
  cout << "Kecoa sering dianggap sebagai hama dalam bangunan, walaupun tidak semua kecoa yang termasuk kategori hama." << endl;
}
