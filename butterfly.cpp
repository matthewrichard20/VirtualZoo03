#include "butterfly.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Butterfly::Butterfly(int w) : Insect(w){
  diet = new Herbivore(5);
  habitat = new char[2];
  habitat[0]='a';
  habitat[1]='0';
  code='B';
  name = "Kupu-kupu";
  sound= "...";
  tame = true;
  is_animal=true;
}
  
Butterfly::~Butterfly(){
  delete diet;
  delete habitat;
}

void Butterfly::Interact(){
  std::cout<<"Kupu-kupu hinggap di suatu bunga"<<std::endl;
  std::cout<<"Kupu-kupu itu terbang lagi"<<std::endl;
  Talk();
}

void Butterfly::AnimalDescription(){
  std::cout<<"Kupu-kupu adalah serangga dengan warna yang bermacam-macam"<<std::endl;
  std::cout<<"Warnanya bergantung pada jenis kupu-kupu dan gendernya"<<std::endl;
}
