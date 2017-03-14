#include "clownFish.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


clownFish::clownFish(int w) : Pisces(w){
  diet = new Herbivore(3);
  habitat = new char[2];
  habitat[0]='w';
  habitat[1]='0';
  code='f';
  name = "Ikan badut";
  sound= "Blub blub";
  tame = true;
  is_animal=true;
}
  
clownFish::~clownFish(){
  delete diet;
  delete habitat;
}

void clownFish::Interact(){
  std::cout<<"Ikan badut berenang-renang bebas di dalam akuarium"<<std::endl;
  std::cout<<"Merlin? Nemo?"<<std::endl;
  Talk();
}

void clownFish::AnimalDescription(){
  std::cout<<"Ikan ini berwarna oranye dengan garis-garis hitam"<<std::endl;
  std::cout<<"Ikan badut ini terkenal karena tokoh pada film 'Finding Nemo'"<<std::endl;
}
