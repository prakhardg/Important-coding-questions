#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; cin>>n;
	bool sieve[n+1];
	memset(sieve, true, sizeof(sieve));
	
	sieve[0]  =sieve[1] =  false;
	for(int i=3; i<n+1; i++){
		for(int j=2; j*j<= i ; j++){
			if(i/j == float(i)/j){
				sieve[i] = false; break;
			}
		}
	}
	for(int i=0; i<n+1; i++){
		if(sieve[i])cout<<i<<" ";
	}
	return 0;
}
