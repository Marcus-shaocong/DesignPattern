#ifndef _I_ANIMAL_H
#define _I_ANIMAL_H

class IAnimal
{
  public:
    virtual int GetNumberOfLegs() const = 0;
    virtual void Speak() = 0;
    virtual void Free() = 0;
}; 
typedef IAnimal* (*CreateAnimalFn)(void); 
#endif
