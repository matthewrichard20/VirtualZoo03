#include "komodo.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Komodo::Komodo(int w) : Reptile(w){
  diet = new Carnivore(25);
  habitat = new char[2];
  habitat[0]='l';
  habitat[1]='0';
  code='K';
  name = "Komodo";
  sound= "Sshhh";
  tame = false;
  is_animal=true;
}
  
Komodo::~Komodo(){
  delete diet;
  delete habitat;
}

void Komodo::Interact(){
  std::cout<<"Komodo menjulur-julurkan lidahnya"<<std::endl;
  std::cout<<"Berjalan-jalan dalam kandang"<<std::endl;
  Talk();
}

void Komodo::AnimalDescription(){
  std::cout<<"Hewan unik Indonesia Tengah yang hanya ada di pulau komodo"<<std::endl;
}
