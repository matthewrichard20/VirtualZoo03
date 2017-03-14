#include "blueTang.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


BlueTang::BlueTang(int w) : Pisces(w){
  diet = new Herbivore(5);
  habitat = new char[2];
  habitat[0]='w';
  habitat[1]='0';
  code='t';
  name = "Blue Tang";
  sound= "Blub blub";
  tame = true;
  is_animal=true;
}
  
BlueTang::~BlueTang(){
  delete diet;
  delete habitat;
}

void BlueTang::Interact(){
  std::cout<<"Ikan blue tang berenang-renang dalam air"<<std::endl;
  std::cout<<"Hai Dory!"<<std::endl;
  Talk();
}

void BlueTang::AnimalDescription(){
  std::cout<<"Ikan blue tang adalah suatu jenis ikan hias berwarna biru dengan aksen hitam"<<std::endl;
  std::cout<<"Jika Anda sudah pernah menonton film 'Finding Nemo', Dory adalah ikan blue tang"<<std::endl;
}
