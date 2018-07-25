#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n = s.length();
	int tbl[n][n];
	memset(tbl, 0, sizeof(tbl));
	
	int len = 1;
	int i,j;
	for(; len<n;len++ ){
		for(i=0, j = len; j < n; ++j,++i){
			tbl[i][j] = s[i]== s[j]? tbl[i+1][j-1]: min(tbl[i][j-1], tbl[i+1][j])+1;
		}
	}
	cout<<tbl[0][n-1];
	return 0;
}
