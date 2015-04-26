#ifndef _STOCK_GRABBER_H
#define _STOCK_GRABBER_H
#include <map>
#include <iostream>
#include <string>
#include "StockObserver.h"

using namespace std;

class StockObserver;

class StockGrabber
{
  std::map< std::string, StockObserver* > observerMap;
  double ibmPrice;
  double aplPrice;
  double googlePrice;

public:
  StockGrabber();
  ~StockGrabber();
  void registeObserver(StockObserver* obs, std::string serviceName);

  void unregisteObserver(std::string serviceName);

  void notifyObserver();

  void setIBMPrice(double price);

};

#endif
