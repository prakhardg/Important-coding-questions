#include<bits/stdc++.h>
using namespace std;

void print(int n, int lim){
	cout<<n<<" ";
	if(n<0 || n >lim) return;
	print(n-5, lim);
	cout<<n<<" ";
}

int main(){
	int n; cin>>n;
	print(n,n);
}
