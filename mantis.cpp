#include <iostream>
#include <string>
#include "mantis.h"

using namespace std;

Mantis :: Mantis(int w) : Insect(w){
  diet = new Herbivore(10);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = '0';
  code='m';
  name = "Belalang sembah";
  sound = "...";
  tame = true;
  is_animal = true;
}
    
Mantis :: ~Mantis(){
  delete diet;
  delete habitat;
}
    
void Mantis :: Interact(){
  cout << "Belalang hampir selalu tidak terlihat di habitat aslinya." << endl;
  cout << "Mereka berkamuflase dengan bersembunyi menyerupai daun." << endl;
  Talk();
}
    
void Mantis :: AnimalDescription(){
  cout << "Belalang sembah adalah serangga yang termasuk ke dalam ordo mantodea." << endl;
  cout << "Mereka disebut praying mantis karena sikapnya yang seringkali kelihatan seperti sedang berdoa. " << endl;
}
