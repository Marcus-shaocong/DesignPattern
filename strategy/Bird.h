#ifndef _BIRD_H
#define _BIRD_H
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Bird : public Animal
{

public:
  void catchAMouce();
  Bird();
  ~Bird();
};

#endif
