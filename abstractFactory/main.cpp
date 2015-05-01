#include <iostream>
#include <string>

#include "PhoneFactory.h"
#include "ConcreteFactory.h"
#include "ConcretePhone.h"
#include "Phonetypes.h"

using namespace std;

int main()
{
  APhoneFactory * factory= APhoneFactory::CreateFactory(APhoneFactory::SAMSUNG);

  cout<<" from samsung:"<<factory->GetDumb()->Name();

  return 0;
}
