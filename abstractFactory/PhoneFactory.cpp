#include "ConcreteFactory.h"
#include "PhoneFactory.h"


APhoneFactory* APhoneFactory::CreateFactory(PHONE_FACTORIES factory)
{
  if(factory == APhoneFactory::SAMSUNG)
  {
    return new SamsungFactory();
  }
  else if(factory == APhoneFactory::HTC)
  {
    return new HTCFactory();
  }
  else if(factory == APhoneFactory::NOKIA)
  {
    return new NokiaFactory();
  }

}
