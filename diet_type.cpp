// file : DietType.cpp
#include "diet_type.h"
#include <iostream>

using namespace std;

DietType :: DietType()
{
  portion = umum;
}

DietType :: DietType(int p)
{
  portion = p;
}

char DietType::GetCode(){
  return code;
}

int DietType::GetPortion(){
  return portion;
}


