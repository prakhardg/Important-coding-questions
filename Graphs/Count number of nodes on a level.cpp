#include<bits/stdc++.h>
using namespace std;

class Graph{
	int n;
	list<int> *adj;
// 	bool **tc;
// 	void dfs_utils(int s, int v) ;
	public:
		Graph(int n);
		void add_edge(int s, int v){adj[s].push_back(v);}
		int count_nodes_on_level(int s,int l);
		
};

Graph::Graph(int n){
	this->n = n;
	adj = new list<int>[n];

}


int Graph:: count_nodes_on_level(int s, int l){
    bool *visited = new bool[n];
    int level[n];
    queue<int> q ;
    for(int i=0; i<n; i++){
        visited[i] = false;
    }
    level[s] =0;
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        s = q.front();
        q.pop();
        for(list<int>::iterator it= adj[s].begin(); it !=  adj[s].end(); it++){
            if(!visited[*it]){
                visited[*it] = true;
                level[*it] = level[s]+1;
                q.push(*it);
            }
        }
    }
    int c =0;
    for(int i=0; i<n; i++){
    	cout<<level[i]<<" ";
        if(level[i]==l)
        c++;
    }
    return c;
}



int main(){
	Graph g(5);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 3);
    g.add_edge(2, 4);
    g.add_edge(2, 5);
    // g.add_edge(3, 3);
    
    cout<<g.count_nodes_on_level(0, 2);
 
    return 0;
	
}
