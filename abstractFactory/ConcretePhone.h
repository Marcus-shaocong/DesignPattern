#ifndef _CONCRETE_PHONE_H
#define _CONCRETE_PHONE_H

#include <string>
#include "Phonetypes.h"

class Asha : public IDumb
{
  public:
    std::string Name()
    {
      return "Asha";
    }
};

class Primo: public IDumb
{
  public:
    std::string Name()
    {
      return "Guru";
    }
};


class Genie: public IDumb
{
  public:
    std::string Name()
    {
      return "Genie";
    }
};

class GalaxyS2 : public ISmart
{
  public:
    std::string Name()
    {
      return "GalaxyS2";
    }
};


class Titan: public ISmart
{
  public:
    std::string Name()
    {
      return "Titan";
    }
};

class Lumia: public ISmart
{
  public:
    std::string Name()
    {
      return "Lumia";
    }
};

#endif
