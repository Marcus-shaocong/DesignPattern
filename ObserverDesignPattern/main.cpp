#include <string>
#include <iostream>

#include "StockGrabber.h"
#include "StockObserver.h"

int main()
{
  StockGrabber *sga = new StockGrabber();
  StockObserver* ob1 = new StockObserver(sga);
  sga->setIBMPrice(6.6);
  delete ob1;
  delete sga;
  return 0;

}
