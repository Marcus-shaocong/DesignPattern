#include <iostream>

using namespace std;

class alloc{};

template <class T, class Aloc= alloc, size_t BufSiz = 0>
class deque
{
  public:
    deque(){cout <<"deque"<<endl;}
};


template < class T, class Sequence = deque<T> >
class stack
{
public:
  stack() {cout <<"stack"<<endl;}
private:
    Sequence c;

};

int main()
{
  stack<int> x;
  return 0;
}
