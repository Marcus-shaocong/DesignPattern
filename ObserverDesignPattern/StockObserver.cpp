#include <iostream>
#include <string>

#include "StockObserver.h"
#include "StockGrabber.h"
using namespace std;

const std::string obName = "ob1";
StockObserver::~StockObserver()
{}

StockObserver::StockObserver(StockGrabber* sg)
{
  sg->registeObserver(this,obName);
  
}
void StockObserver::update(double ibmPrice, double aplPrice, double googlePrice)
{
  this->ibmPrice = ibmPrice;
  this->aplPrice = aplPrice;
  this->googlePrice = googlePrice;
  printPrice();
}
void StockObserver::printPrice()
{
  cout<<"ibmprice:"<<this->ibmPrice<<" aplPrice: "<<this->aplPrice<<" googlePrice: "<<this->googlePrice<<endl;
}
