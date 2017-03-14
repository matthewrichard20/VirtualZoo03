#include "animal.h"
#include <string.h>

Animal::Animal(int w) : weight(w){
  habitat = new char[2];
  tame = true;
  is_animal=false;
}

Animal::~Animal(){
  delete diet;
  delete habitat;
}

std::string Animal::GetName(){
  return name;
}  

DietType* Animal::GetDiet(){
  return diet;
}

char* Animal::GetHabitat(){
  return habitat;
}

void Animal::Feed(){
  std::cout<<name;
  diet->Feeds(CalculateFood());
  std::cout<<std::endl;
  std::cout<<name<<" menikmati makanannya dengan lahap"<<std::endl;
}  
  
void Animal::ChangeTame(bool _tame){
  tame=_tame;
}
    
void Animal::Talk(){
  std::cout<<sound<<std::endl;
}

char Animal::Render(){
  return code;
}

int Animal::CalculateFood(){
  return (weight*diet->GetPortion());
}
