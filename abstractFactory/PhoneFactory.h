#ifndef _PHONE_FACTORY_H
#define _PHONE_FACTORY_H

#include "Phonetypes.h"

class ISmart;
class IDumb;

class APhoneFactory
{
  public:
    enum PHONE_FACTORIES{
      SAMSUNG,
      HTC,
      NOKIA
    };

    virtual ISmart* GetSmart() = 0;
    virtual IDumb* GetDumb() = 0;
    
    static APhoneFactory* CreateFactory(PHONE_FACTORIES type);
};

#endif
