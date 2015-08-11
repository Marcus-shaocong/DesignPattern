#include <vector>

#include <iostream>

using namespace std;


template <typename T>

class testClass{
  public:
    static int _data;
};

template<> int testClass<int>::_data = 1;
template<> int testClass<char>::_data = 2;


int main()
{

cout<<testClass<int>::_data <<endl;
cout<<testClass<char>::_data <<endl;

testClass<char> obj1, obj2;
testClass<int> int1, int2;
cout<<obj1._data<<endl;
cout<<int1._data<<endl;
obj1._data = 4;
int1._data = 5;
cout<<endl;
cout<<obj1._data<<endl;
cout<<int1._data<<endl;

cout<<endl;
cout<<testClass<int>::_data <<endl;
cout<<testClass<char>::_data <<endl;

}
