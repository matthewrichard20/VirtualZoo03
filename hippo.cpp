#include "hippo.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Hippo::Hippo(int w) : Mammal(w){
  diet = new Herbivore(30);
  habitat = new char[2];
  habitat[0]='w';
  habitat[1]='l';
  code='H';
  name = "Kuda nil";
  sound= "Ngok brrr";
  tame = false;
  is_animal=true;
}
  
Hippo::~Hippo(){
  delete diet;
  delete habitat;
}

void Hippo::Interact(){
  std::cout<<"Kuda nil membuka mulutnya"<<std::endl;
  std::cout<<"Giginya tampak"<<std::endl;
  Talk();
}
void Hippo::AnimalDescription(){
  std::cout<<"Hewan yang biasa hidup di daerah Afrika sekitar sungai"<<std::endl;
  std::cout<<"Biasa tinggal berkelompok"<<std::endl;
  
}
