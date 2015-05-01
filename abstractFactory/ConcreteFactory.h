#ifndef _CONCRETE_FACTORY_H
#define _CONCRETE_FACTORY_H

#include "ConcretePhone.h"
#include "PhoneFactory.h"

class SamsungFactory : public APhoneFactory
{
  public:
    ISmart* GetSmart()
    {
      return new GalaxyS2();
    }

    IDumb * GetDumb()
    {
      return new Primo();
    }
};

class HTCFactory: public APhoneFactory
{
  public:
    ISmart* GetSmart()
    {
      return new Titan();
    }

    IDumb * GetDumb()
    {
      return new Genie();
    }
};

class NokiaFactory: public APhoneFactory
{
  public:
    ISmart* GetSmart()
    {
      return new Lumia();
    }

    IDumb * GetDumb()
    {
      return new Asha();
    }
};
#endif


