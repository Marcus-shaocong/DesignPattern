#ifndef _DOG_H
#define _DOG_H
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Dog : public Animal
{

public:
  void digHole();
  Dog();
  ~Dog();
};

#endif
