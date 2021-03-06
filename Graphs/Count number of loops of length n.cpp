#include<bits/stdc++.h>
using namespace std;
const int V = 5;

void DFS(bool graph[][V], bool marked[], int n, int v, int start, int &count){
	marked[v] = true;
	if(!n){
		marked[v] =false;
		if(graph[v][start])count++;
		return;
	}
	for(int i=0; i<V; i++){
		if(!marked[i] && graph[v][i]){
			DFS(graph, marked, n-1, i, start, count);
			
		}
				
	}
	marked[v] = false;
	
}

int countCycles(bool graph[][V], int n){
	bool marked[V];
	memset(marked, 0, sizeof(marked));
	int count =0;
	for(int i=0; i<V; i++){
		DFS(graph,marked, n-1, i, i, count);
		marked[i] = true;
	}
	return count/2;
}
int main(){
	bool graph[][V] = {{0, 1, 0, 1, 0},
                      {1, 0, 1, 0, 1},
                      {0, 1, 0, 1, 0},
                      {1, 0, 1, 0, 1},
                      {0, 1, 0, 1, 0}};
    int n = 4;
    cout<<countCycles(graph, n);
    return 0;
}
