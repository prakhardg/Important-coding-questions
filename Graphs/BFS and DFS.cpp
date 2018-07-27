#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> v[], int s, int d)
{
	v[s].push_back(d);
	v[d].push_back(s);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}

void dfs(vector <int> v[]){
    std::stack<int> s ;
    set<int> visited;
    s.push(0);
    visited.insert(0);
    while(!s.empty()){
        int tmp = s.top();
        s.pop();
        cout<<tmp<<" ";
        for(auto x: v[tmp]){
            if(visited.find(x) == visited.end()){
                s.push(x);
                visited.insert(x);
            }
        }
    }
}

void bfs(vector<int > v[]){
	queue<int> q;
	set <int> visited;
	q.push(0);
	visited.insert(0);
	while(!q.empty()){
		int cur = q.front();
			for(auto x: v[cur]){
			 //   cout<<"here"<<x;
				if(visited.find(x) == visited.end()){
				    // cout<<x;
				   q.push(x);
				   visited.insert(x);
				}
				
			}
		
		cout<< cur<<" ";
		q.pop();
		
	} 
}

int main(){
	int V = 5; // 5 nodes
	vector<int > v[V];
	add_edge(v,0,1);
	add_edge(v, 0,4);
	add_edge(v,1,2);
	add_edge(v,1,3);
	add_edge(v,1,4);
	add_edge(v,2,3);
	add_edge(v,3,4);
// 	printGraph(v,5);
	bfs(v);
	cout<<endl;
	dfs(v);
}
