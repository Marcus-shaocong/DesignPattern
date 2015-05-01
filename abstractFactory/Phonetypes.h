#ifndef _PHONE_TYPES_H
#define _PHONE_TYPES_H

#include <string>
#include <iostream>

class ISmart
{
  public:
    virtual std::string Name()=0;
};

class IDumb
{
  public:
    virtual std::string Name() = 0;
};

#endif
