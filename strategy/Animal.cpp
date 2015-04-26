#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal()
{}

Animal::~Animal()
{}

double Animal::getWeight()
{
  return this->weight;
}

void Animal::setWeight(double weg)
{
  this->weight = weg;
}
string Animal::getName()
{
  return this->name;
}
void Animal::setName(string name)
{
  this->name = name;
}

void Animal::setFlyingType(Flys* flyingType)
{
  this->flyingType = flyingType;
}

