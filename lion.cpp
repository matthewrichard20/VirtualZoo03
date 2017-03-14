#include "lion.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Lion::Lion(int w) : Mammal(w){
  diet = new Carnivore(35);
  habitat = new char[2];
  habitat[0]='l';
  habitat[1]='0';
  code='L';
  name = "Singa";
  sound= "Roar";
  tame = false;
  is_animal=true;
}
  
Lion::~Lion(){
  delete diet;
  delete habitat;
}

void Lion::Interact(){
  std::cout<<"Singa mengendap-ngendap di balik semak"<<std::endl;
  std::cout<<"Tampaknya dia ingin menyergap sesuatu"<<std::endl;
  Talk();
}

void Lion::AnimalDescription(){
  std::cout<<"Hewan karnivora yang memiliki habitat asli di daerah Afrika"<<std::endl;
}
