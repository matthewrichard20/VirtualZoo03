#include "eagle.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Eagle::Eagle(int w) : Aves(w){
  diet = new Carnivore(80);
  habitat = new char[2];
  habitat[0]='a';
  habitat[1]='0';
  code='E';
  name = "Elang";
  sound= "Koak";
  tame = false;
  is_animal=true;
}
  
Eagle::~Eagle(){
  delete diet;
  delete habitat;
}

void Eagle::Interact(){
  std::cout<<"Elang menatap dengan matanya yang tajam"<<std::endl;
  std::cout<<"Dia mengepakkan sayapnya"<<std::endl;
  Talk();
}

void Eagle::AnimalDescription(){
  std::cout<<"Burung karnivora yang biasa memakan ular atau hewan lain"<<std::endl;
}
