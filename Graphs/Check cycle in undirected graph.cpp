#include<bits/stdc++.h>
using namespace std;


void create_graph(vector<int> adj[], int v,int x){
	adj[v].push_back(x);
	adj[x].push_back(v);
	
}

bool util(int i, vector<int >adj[], bool visited[], int parent){
	visited[i] = true;
	vector<int> ::iterator it;
	for(it = adj[i].begin(); it != adj[i].end(); it++){
//		cout<<*it<<endl;
		if(!visited[*it]){
		if(util(*it, adj, visited, i))
		return true;
		}
		
		else if(*it != parent) return true;
	}
	return false;
}

bool has_cycle( vector<int> v[]  ){
	bool visited[5];
	memset(visited, false, sizeof(visited));
//	cout<<"eher";
	for(int i=0; i<5; i++){
		if(!visited[i]){
//			cout<<i<<endl;
			if(util( i,v, visited, -1)){
				return true;
			}
		}
	}
	return false;
}

int main(){
	vector<int> adj[5];

	create_graph(adj,0,1);
	create_graph(adj,0,3);
	create_graph(adj,1,2);
	create_graph(adj,0,2);
	create_graph(adj,3,4);
	vector<int>::iterator it;
//	for(it = adj[0].begin(); it!= adj[0].end(); it++)cout<<"*it = "<<*it<<endl;
	
	if(has_cycle(adj))cout<<"Yes\n";
	else cout<<"No\n";
}
