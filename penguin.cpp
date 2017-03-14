#include <iostream>
#include <string>
#include "penguin.h"

using namespace std;

Penguin :: Penguin(int w) : Aves(w)
{
  diet = new Carnivore(30);
  habitat = new char[2];
  habitat[0] = 'a';
  habitat[1] = 'l';
  code='P';
  name = "Penguin";
  sound = "...";
  tame = true;
  is_animal = true;
}
    
Penguin :: ~Penguin()
{
  delete diet;
  delete habitat;
}
    
void Penguin:: Interact()
{
  cout << "Penguin bermain main dengan 'arena' yang telah dibuat di kandangnya" << endl;
  cout << "Mereka berseluncur di 'arena' mereka dengan menggunakan perut mereka" << endl;
  Talk();
}

void Penguin :: AnimalDescription()
{
  cout << "Penguin adalah hewan akuatik jenis burung yang tidak bisa terbang dan secara umum hidup di belahan bumi selatan." << endl;
  cout << "Penguin terlihat tidak takut dengan manusia, bahkan mendekati peneliti yang sedang mempelajari mereka. " << endl;
}
