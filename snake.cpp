#include <iostream>
#include <string>
#include "snake.h"

using namespace std;

Snake :: Snake(int w) : Reptile(w){
  diet = new Carnivore(100);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = '0';
  name = "Ular";
  sound = "ssssshhhhh~";
  tame = true;
  is_animal = true;
}
    
Snake :: ~Snake()
{
  delete diet;
  delete habitat;
}
    
void Snake :: Interact()
{
  cout << "Ular melingkar di pohon sambil beristirahat." << endl;
  cout << "Terkadang, ia berdesis sambil menjulurkan lidahnya" << endl;
  Talk();
}
    
void Snake :: AnimalDescription()
{
  cout << "Ular adalah reptilia tak berkaki dan bertubuh panjang." << endl;
  cout << "Ular memiliki sisik seperti kadal dan digolongkan ke dalam reptil bersisik." << endl;
}
