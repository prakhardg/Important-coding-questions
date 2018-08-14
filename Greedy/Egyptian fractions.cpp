#include<bits/stdc++.h>
using namespace std;

void Egypt(int n, int d){
	if(!n || !d) return ;
	if(d%n==0) {
		cout<<"1/"<<d/n;
		return;
	}
	
	if(n%d==0){
		cout<<n/d;
		return;
	}
	
	if(n>d){
		cout<<n/d<<" + ";
		Egypt(n%d, d);
		return;
	}
	
	if (d>n){
		cout<<"1/"<<(d/n + 1)<<" + ";
		Egypt( n * (d/n + 1) - d  , (d/n + 1) * d);
	}
	
	
}

int main(){
	int nr, dr;
	cin>>nr>>dr;
	cout<<"Egyptian fractions are: \n";
	Egypt(nr,dr);
}
