#include<bits/stdc++.h>
#define N 4
using namespace std;
int sol[N][N] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}} ;

bool isSafe(int maze[N][N], int x , int y){
	return (x >=0 && x<N && y>=0 && y<N && maze[x][y]==1);
}

bool util(int maze[N][N], int x, int y){
	if(x== N-1 && y== N-1){
		sol[x][y]=1;
		return true;
	}
	
	if(isSafe(maze,x,y)){
		sol[x][y]=1;
		
		if(util(maze, x+1, y)==true)return true;
		if(util(maze, x, y+1)==true) return true;
		
		sol[x][y]=0; 
		return false;
	}
	return false;
	
}

bool solveMaze(int maze[N][N]){
	if(util(maze, 0,0)== false){
		cout<<"No possible path\n";
		return false;
	}
	printSol(sol);
	return true;
}

int main(){
	int maze[N][N] = {  {1, 0, 0, 0},
        				{1, 1, 0, 1},
        				{0, 1, 0, 0},
        				{1, 1, 1, 1} };
        				
    solveMaze(maze);
    return 0;
}

