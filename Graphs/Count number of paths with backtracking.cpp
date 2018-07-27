#include<bits/stdc++.h>
using namespace std;

class Graph{
  int V;
  list<int > *adj;
  
  void count_util(int s, int d, bool visited[], int &pathcount);
public:
    Graph(int V);
    void add_edge(int s, int d);
    int count_path(int s, int d);
    
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}
void Graph:: add_edge(int s, int d)
{
    adj[s].push_back(d);
}

void Graph::count_util (int s, int d, bool visited[], int &pathcount){
    visited[s] = true;
    if(s==d) pathcount  = pathcount+1;
    
    list<int >::iterator it;
    for(it  = adj[s].begin() ;  it!=adj[s].end(); it++){
        if(visited[*it] == false){
            count_util(*it, d, visited, pathcount);
        }
    }
    visited[s] = false;
}

int Graph::count_path(int s , int d){
    bool * visited = new bool[V];
    memset(visited, false, sizeof(visited));
    int pathcount = 0;
    count_util(s,d,visited, pathcount);
    return pathcount;
}


int main(){
    Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(0, 3);
    g.add_edge(2, 0);
    g.add_edge(2, 1);
    g.add_edge(1, 3);
    cout<<g.count_path(2,3);
    return 0;
 
}





