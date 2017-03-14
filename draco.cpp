#include "draco.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Draco::Draco(int w) : Reptile(w){
  diet = new Carnivore(20);
  habitat = new char[2];
  habitat[0]='a';
  habitat[1]='l';
  code='D';
  name = "Bunglon terbang";
  sound= "...";
  tame = false;
  is_animal=true;
}
  
Draco::~Draco(){
  delete diet;
  delete habitat;
}

void Draco::Interact(){
  std::cout<<"Bunglon terbang membuka selaput kulitnya"<<std::endl;
  std::cout<<"Dia berpindah dengan cara terbang"<<std::endl;
  Talk();
}

void Draco::AnimalDescription(){
  std::cout<<"Jenis reptil yang memiliki kulit tipis berfungsi sebagai sayap"<<std::endl;
}
