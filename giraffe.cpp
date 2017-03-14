#include "giraffe.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Giraffe::Giraffe(int w) : Mammal(w){
  diet = new Herbivore(50);
  habitat = new char[2];
  habitat[0]='l';
  habitat[1]='0';
  code='G';
  name = "Jerapah";
  sound= "...";
  tame = true;
  is_animal=true;
}
  
Giraffe::~Giraffe(){
  delete diet;
  delete habitat;
}

void Giraffe::Interact(){
  std::cout<<"Jerapah menengok dengan lehernya yang panjang"<<std::endl;
  std::cout<<"Telinganya bergerak-gerak"<<std::endl;
  Talk();
}

void Giraffe::AnimalDescription(){
  std::cout<<"Hewan dengan leher panjang dan kaki yang panjang pula"<<std::endl;
  std::cout<<"Biasa tinggal di padang rumput luas dengan pohon-pohon yang tinggi"<<std::endl;
}
