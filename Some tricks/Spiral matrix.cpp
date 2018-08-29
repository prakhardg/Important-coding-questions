#include<bits/stdc++.h>
#define N 4

using namespace std;


void print_spiral(int a[N][N], int rs, int cs, int ce, int re){
	for(int i=rs; i<=ce; i++)cout<<a[rs][i]<<" ";
	
	for(int i= rs+1; i<= re; i++)cout<<a[i][ce]<<" ";
	
	if(rs+1 <=re){
		for(int i = ce-1; i>=cs;i--) cout<<a[re][i]<<" ";
	}
	
	if(cs +1 <= ce){
		for(int i = re -1 ; i>rs; i--) cout<<a[i][cs]<<" ";
	}
	
	if(rs+1 <= re-1 && cs+1 <= ce-1 ){
		print_spiral(a, rs+1, cs+1, ce-1, re-1);			//// Recursion
	}
}

int main(){
	int a[N][N];
	for(int i=0; i<N; i++)
	for(int j=0; j<N;j++) cin>>a[i][j];
	
	print_spiral(a, 0,0, N-1, N-1);
	
	return 0;
}
