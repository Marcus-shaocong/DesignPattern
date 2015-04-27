#ifndef _ANIMAL_FACTORY_H
#define _ANIMAL_FACTORY_H
#include <map>
#include <string>
#include <iostream>

#include "IAnimal.h"
using namespace std;

class AnimalFactory
{
  private:
    AnimalFactory();
    AnimalFactory(const AnimalFactory &) { }
    AnimalFactory &operator=(const AnimalFactory &) { return *this; }

    typedef map<string, CreateAnimalFn> FactoryMap;
    FactoryMap m_FactoryMap;
  public:
    ~AnimalFactory() { m_FactoryMap.clear(); }

    static AnimalFactory *Get()
    {
      static AnimalFactory instance;
      return &instance;
    }

    void Register(const string &animalName, CreateAnimalFn pfnCreate);
    IAnimal *CreateAnimal(const string &animalName);
};

#endif
