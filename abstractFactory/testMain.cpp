
#include <iostream>

class Test
{
  public:
    enum ENUMTEST
    {
      mon,
      sun,
      tue
    }; 
  static int createFactory(ENUMTEST type);
};


int Test::createFactory(ENUMTEST type)
{
  if(type == Test::mon)
  {return 1;}
  else if (type == Test::sun)
  {return 2;}
  else
  return 3;
}


int main()
{
  int b =  Test::createFactory(Test::mon); 
  std::cout<<b;
  return 0;
}
