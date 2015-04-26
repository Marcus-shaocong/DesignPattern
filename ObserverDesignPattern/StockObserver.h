#ifndef _STOCK_OBSERVER_H
#define _STOCK_OBSERVER_H
#include <string>
#include <iostream>
#include "StockGrabber.h"

class StockGrabber;
class StockObserver
{
  double ibmPrice;
  double aplPrice;
  double googlePrice;

public:
StockObserver(StockGrabber* sg);

~StockObserver();

  void update(double ibmPrice, double aplPrice, double googlePrice);

  void printPrice();
};
#endif
