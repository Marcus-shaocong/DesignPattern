#ifndef _ANIMALS_H
#define _ANIMALS_H
#include <iostream>
#include <string>
#include "IAnimal.h"
using namespace std;

class Cat : public IAnimal
{
  public:
    int GetNumberOfLegs() const { return 4; }
    void Speak() { cout << "Meow" << endl; }
    void Free() { delete this; }

    static IAnimal * Create() { return new Cat(); }
};

class Dog : public IAnimal
{
  public:
    int GetNumberOfLegs() const { return 4; }
    void Speak() { cout << "Woof" << endl; }
    void Free() { delete this; }

    static IAnimal * Create() { return new Dog(); }
};

class Spider : public IAnimal 
{
  public:
    int GetNumberOfLegs() const { return 8; }
    void Speak() { cout << endl; }
    void Free() { delete this; }

    static IAnimal * Create() { return new Spider(); }
};

class Horse : public IAnimal
{
  public:
    int GetNumberOfLegs() const { return 4; }
    void Speak() { cout << "horse is a horse, of course, of course" << endl; }
    void Free() { delete this; }

    static IAnimal * Create() { return new Horse(); }
};
#endif
