#include "AnimalFactory.h"
#include "Animals.h"
#include "IAnimal.h"

AnimalFactory::AnimalFactory()
{
  Register("Horse",&Horse::Create);
  Register("Cat", &Cat::Create);
  Register("Dog",&Dog::Create);
  Register("Spider", &Spider::Create);
}

void AnimalFactory::Register(const string &animalName, CreateAnimalFn pfnCreate)
{
  m_FactoryMap[animalName] = pfnCreate;
}


IAnimal *AnimalFactory::CreateAnimal(const string &animalName)
{
  FactoryMap::iterator it = m_FactoryMap.find(animalName);
  if( it != m_FactoryMap.end() )
    return it->second();
  return NULL;
}


