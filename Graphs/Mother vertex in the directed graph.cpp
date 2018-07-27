#include<bits/stdc++.h>

using namespace std;

class Graph{
	int V;
	list <int> *adj;
	void dfs_utils(int v, vector<bool> &visited );
	public:
		Graph(int V);
		void addEdge(int v, int w);
		int findMother();
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph:: addEdge(int v,int w){
	adj[v].push_back(w);	
}
void Graph:: dfs_utils(int v, vector<bool> &visited){
	visited[v] = true;
	for(auto x : adj[v]){
		if(! visited[x]){
			dfs_utils(x, visited);
		}
	}
}

int Graph::findMother(){
	vector <bool> visited(V, false);
	int last =0;
	for(int i=0; i< V; i++){
		if(!visited[i]){
			dfs_utils(i, visited);
			last=i;
		}
	}
	fill(visited.begin(),visited.end(), false);
	dfs_utils(last, visited);
	for(auto x: visited){
		if(!x)return -1;
	}
	return last;
}



int main(){
	Graph g(7);
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(4, 1);
    g.addEdge(6, 4);
    g.addEdge(5, 6);
    g.addEdge(5, 2);
    g.addEdge(6, 0);
    cout<<"Mother vertex is "<<g.findMother();
    return 0;
	
}
