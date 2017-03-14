#include "Crocodile.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Crocodile::Crocodile(int w) : Reptile(w){
  diet = new Carnivore(100);
  habitat = new char[2];
  habitat[0]='l';
  habitat[1]='w';
  code='C';
  name = "Buaya";
  sound= "Rawr";
  tame = false;
  is_animal=true;
}
  
Crocodile::~Crocodile(){
  delete diet;
  delete habitat;
}

void Crocodile::Interact(){
  std::cout<<"Buaya membuka mulutnya menunggu mangsa"<<std::endl;
  std::cout<<"Buaya itu bergerak di dalam kandangnya"<<std::endl;
  Talk();
}

void Crocodile::AnimalDescription(){
  std::cout<<"Pemakan daging yang biasa ditemukan di daerah dekat sungai"<<std::endl;
}
