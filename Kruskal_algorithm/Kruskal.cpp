#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

struct Edge{
  char vertex1;
  char vertex2;
  int weight;
  Edge(char  v1, char v2, int w):vertex1(v1), vertex2(v2), weight(w){}
};

struct Graph
{
  vector<char> vertices; 
  vector<Edge> edges;
  int size;
};

std::map<char,  char> PARENT;
std::map<char, int> RANK;

char Find( char vertex)
{
  if (PARENT[vertex] == vertex)
    return PARENT[vertex];
  else
    return Find(PARENT[vertex]);
}

void Union( char root1, char root2)
{
  if( RANK[root1] > RANK[root2])
  {
    PARENT[root2] = root1;

  }
  else if( RANK[root2]> RANK[root1])
  {
    PARENT[root1] = root2;
  }
  else{
    PARENT[root1] = root2;
    RANK[root2]++;
  }
}

void Makeset(char vertex)
{
  PARENT[vertex] = vertex;
  RANK[vertex] = 0;
}

bool sort_edge(Edge e1, Edge e2)
{
  return e1.weight < e2.weight;
}

void Kruskal( Graph& g)
{
  vector<Edge> A;
  for(int i=0; i<g.size; i++)
  {
    Makeset(g.vertices[i]);
  }
  sort(g.edges.begin(), g.edges.end(), sort_edge);
  for(int i=0; i<g.edges.size(); i++)
  {
    char root1 = Find(g.edges[i].vertex1);
    char root2 = Find(g.edges[i].vertex2);
    if( root1 != root2 )
    {
      A.push_back(g.edges[i]);
      Union(root1, root2);
    }
  }

  for(int j=0; j<A.size(); j++)
  {
    cout<<A[j].vertex1<<" -- "<<A[j].vertex2<< " " <<A[j].weight<<endl;
  }

}

int main()
{
  char t[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  Graph g;
  g.vertices = vector<char>(t, t+sizeof(t)/sizeof(t[0]));
  g.edges.push_back(Edge('a', 'b', 4));
  g.edges.push_back(Edge('a', 'f', 2));
  g.edges.push_back(Edge('f', 'b', 5));
  g.edges.push_back(Edge('c', 'b', 6));
  g.edges.push_back(Edge('c', 'f', 1));
  g.edges.push_back(Edge('f', 'e', 4));
  g.edges.push_back(Edge('d', 'e', 2));
  g.edges.push_back(Edge('d', 'c', 3));
  g.size = 6;
  Kruskal(g);
  return 0;

}
