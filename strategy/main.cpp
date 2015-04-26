#include <iostream>
#include <string>

#include "Animal.h"
#include "Dog.h"
#include "Bird.h"
#include "Flys.h"
#include "CantFly.h"
#include "Itflys.h"

using namespace std;
int main()
{
  Animal * dog1 = new Dog();
  Animal * bird1 = new Bird();
  dog1->setFlyingType(new CantFly());
  bird1->setFlyingType(new Itflys());

  string str1 = dog1->tryToFly();
  string str2 = bird1->tryToFly();
  cout<<" str: "<<str1<< "str: "<<str2<<endl;
  return 0;
}
