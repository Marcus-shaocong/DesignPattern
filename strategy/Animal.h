#ifndef _ANIMAL_H
#define _ANIMAL_H
#include <iostream>
#include <string>
#include "Flys.h"

using namespace std;

class Animal
{
  string name;
  double weight;
  double speed;

public:

  Animal();
  ~Animal();
  double getWeight();
  void setWeight(double weg); 

  string getName(); 
  void setName(string name);
 
  void fly(){cout<<"I am flying"<<endl;}

  string tryToFly()
  {
    return flyingType->fly();
  }
  Flys* flyingType;

  void setFlyingType(Flys* flyingType);
};

#endif
