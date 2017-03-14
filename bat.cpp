#include "bat.h"


Bat::Bat(int w) : Mammal(w){
  diet = new Omnivore(30);
  habitat = new char[2];
  habitat[0]='a';
  habitat[1]='0';
  code='b';
  name = "Kelelawar";
  sound= "Cit ciiit";
  tame = false;
  is_animal=true;
}
  
Bat::~Bat(){
  delete diet;
  delete habitat;
}

void Bat::Interact(){
  std::cout<<"Kelelawar mengepakkan sayapnya sekali"<<std::endl;
  std::cout<<"Tampaknya sedang tidur"<<std::endl;
  Talk();
}

void Bat::AnimalDescription(){
  std::cout<<"Satu-satunya mamalia yang dapat terbang"<<std::endl;
}
