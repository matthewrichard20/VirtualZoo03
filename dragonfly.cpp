#include "dragonfly.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Dragonfly::Dragonfly(int w) : Insect(w){
  diet = new Herbivore(10);
  habitat = new char[2];
  habitat[0]='a';
  habitat[1]='0';
  code='d';
  name = "Capung";
  sound= "...";
  tame = true;
  is_animal=true;
}
  
Dragonfly::~Dragonfly(){
  delete diet;
  delete habitat;
}

void Dragonfly::Interact(){
  std::cout<<"Capung hinggap di rumput"<<std::endl;
  std::cout<<"Begitu didekati capung langsung terbang"<<std::endl;
  Talk();
}

void Dragonfly::AnimalDescription(){
  std::cout<<"Serangga dengan sayap tipis yang transparan"<<std::endl;
  std::cout<<"Biasa ditemukan di daerah berumput tinggi"<<std::endl;
}
