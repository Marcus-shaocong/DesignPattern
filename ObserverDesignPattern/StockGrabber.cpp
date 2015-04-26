#include <string>
#include <iterator>
#include <map>
#include "StockGrabber.h"
#include "StockObserver.h"

using namespace std;

StockGrabber::StockGrabber()
:ibmPrice(0.0),aplPrice(0.0),googlePrice(0.0)
{}

StockGrabber::~StockGrabber()
{}

void StockGrabber::registeObserver(StockObserver*obs, std::string serviceName)
{
  if( observerMap.find(serviceName) == observerMap.end())
  {
    observerMap[serviceName] = obs;
  }
}


void StockGrabber::unregisteObserver(std::string serviceName)
{
  if( observerMap.find(serviceName) != observerMap.end())
  {
    observerMap.erase(serviceName);
  }
}

void StockGrabber::notifyObserver()
{
  map< string, StockObserver*> ::iterator it;
  
  for( it=observerMap.begin(); it != observerMap.end(); ++it)
  {
    StockObserver * obs = (*it).second;
    obs->update(ibmPrice, aplPrice, googlePrice);
  }
}

void StockGrabber::setIBMPrice(double price)
{
  this->ibmPrice = price;
  notifyObserver();
}
