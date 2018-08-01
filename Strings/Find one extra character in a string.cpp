#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin>>a>>b;
	int res=0;
	for(int i=0; i<a.length(); i++){
		res ^= a[i];
	}
	for(int i=0; i<b.length(); i++){
		res ^=b[i];
	}
	cout<<(char)res<<endl;
	return 0;
}
