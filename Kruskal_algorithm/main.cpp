#include <map>
#include <iostream>
using namespace std;
class Disjoin_set{
  std::map<char, char> PARENT;
  std::map<char, int> RANK;
public:
  Disjoin_set(){ 
    char universe[] = {'a', 'b', 'c', 'd', 'e'};
    for (int i=0; i<5; i++ )
    {
      PARENT[universe[i]] = universe[i];
      RANK[universe[i]] = 0;
    }
    PARENT['d'] = 'b';
    PARENT['b'] = 1;
  }

  char Find(char item){
    if( PARENT[item] == item )
      return item;
    else
      return Find( PARENT[item] );
  }

  void Union(char set_1, char set_2)
  {
    if( RANK[set_1] > RANK[set_2])
      PARENT[set_2] = set_1;
    else if ( RANK[set_2] > RANK[set_1])
      PARENT[set_1] = set_2;
    else
    {
      PARENT[set_1] = set_2;
      RANK[set_2]++;
    }
  }
};

int main()
{
  Disjoin_set ds;
  cout<< ds.Find('c')<<endl;

  return 0;
}
