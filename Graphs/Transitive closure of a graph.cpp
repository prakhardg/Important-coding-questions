#include<bits/stdc++.h>
using namespace std;

class Graph{
	int n;
	list<int> *adj;
	bool **tc;
	void dfs_utils(int s, int v) ;
	public:
		Graph(int n);
		void add_edge(int s, int v){adj[s].push_back(v);}
		void Tclosure();
		
};

Graph::Graph(int n){
	this->n = n;
	adj = new list<int>[n];
	tc = new bool *[n];
	for(int i=0; i<n; i++){
		tc[i] = new bool[n];
		memset(tc[i], false, n*sizeof(bool));
	}
	for(int i=0; i<n; i++)tc[i][i]== true;
}
void Graph:: dfs_utils(int s, int v){
	tc[s][v]== true;
	list<int> :: iterator it;
	for(it = adj[s].begin(); it< adj[s].end(); it++){
		if(!(tc[s][*it]))
			dfs_utils(s, *it);
	}
}

void Graph::Tclosure(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
		cout<<tc[i][j]<<" ";
		cout<<endl;
	}
}

int main(){
	Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);
    cout << "Transitive closure matrix is \n";
    g.Tclosure();
 
    return 0;
	
}
