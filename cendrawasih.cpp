#include "cendrawasih.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Cendrawasih::Cendrawasih(int w) : Aves(w){
  diet = new Herbivore(20);
  habitat = new char[2];
  habitat[0]='a';
  habitat[1]='0';
  code='c';
  name = "Cendrawasih";
  sound= "Koak koak";
  tame = true;
  is_animal=true;
}
  
Cendrawasih::~Cendrawasih(){
  delete diet;
  delete habitat;
}

void Cendrawasih::Interact(){
  std::cout<<"Cendrawasih mengepakkan sayapnya"<<std::endl;
  std::cout<<"Burung surga terbang lagi"<<std::endl;
  Talk();
}

void Cendrawasih::AnimalDescription(){
  std::cout<<"Cendrawasih adalah hewan asli dari daerah Indonesia Timur"<<std::endl;
  std::cout<<"Burung ini menjadi lambang dari daera Irian Jaya"<<std::endl;
}
