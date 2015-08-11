#include <iostream>

using namespace std;

class alloc{};

class deque
{
  public:
    deque(){cout <<"deque"<<endl;}
};


class stack
{
public:
  stack() {cout <<"stack"<<endl;}
private:
  deque c;

};

int main()
{
  stack a;
  return 0;
}
