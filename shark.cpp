#include <iostream>
#include <string>
#include "shark.h"

using namespace std;

Shark :: Shark(int w) : Pisces(w)
{
  diet = new Carnivore(80);
  habitat = new char[2];
  habitat[0] = 'w';
  habitat[1] = '0';
  code='S';
  name = "Hiu";
  sound = "...";
  tame = false;
  is_animal = true;
}
    
Shark :: ~Shark()
{
  delete diet;
  delete habitat;
}
    
void Shark :: Interact()
{
  cout << "Hiu bergerak menyusuri aquarium yang ada." << endl;
  Talk();
}

void Shark :: AnimalDescription()
{
  cout << "Hiu merupakan salah satu hewan ganas yang terdapat di air." << endl;
  cout << "Hiu mempunyai tubuh yang dilapisi kulit dermal denticle yang melindungi mereka dari kerusakan dari parasit." << endl;
  cout << "Hiu juga diceritakan dalam beberapa mitologi di hawaii, yaitu cerita tenatng manusia hiu." << endl;
}
