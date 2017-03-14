#include <iostream>
#include <string>
#include "stingRay.h"

using namespace std;

StingRay :: StingRay(int w) : Pisces(w){
  diet = new Herbivore(70);
  habitat = new char[2];
  habitat[0] = 'w';
  habitat[1] = '0';
  name = "Ikan pari";
  sound = "...";
  tame = true;
  is_animal = true;
}
    
StingRay :: ~StingRay()
{
  delete diet;
  delete habitat;
}
    
void StingRay :: Interact()
{
  cout << "Ikan pari berenang mengitari aquarium yang terbatas luasnya." << endl;
  cout << "Ikan pari mengepakkan 'sayap'nya dalam berenang." << endl;
  Talk();
}

void StingRay :: AnimalDescription()
{
  cout << "Ikan pari memiliki sirip yang panjangnya cukup panjang, sehingga bisa membantu dalam berenang." << endl;
  cout << "Ikan pari dapat ditemuka di lautan tropis di seluruh dunia. Persebaran yang luas dan penampilannya yang unik" << endl;
  cout << "menyebabkan ikan ini memiliki banyak nama." << endl;
}
