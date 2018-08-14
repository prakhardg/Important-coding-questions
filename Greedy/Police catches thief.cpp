#include<bits/stdc++.h>
#define N 6
using namespace std;

int main(){
	int k; 
	vector<char> v;
	vector<int > pi;
	vector<int> ti;
	cin>>k;
	for(int i=0; i<N; i++){
		char x ; cin>>x; 
		if(x=='t' || x == 'T') ti.push_back(i);
		else pi.push_back(i);
	}
	int tp,pp;
	tp=0; pp=0;
	int ans=0;
	while(pp <pi.size() && tp < ti.size()){
		if(abs(pi[pp] - ti[tp]) <=k ){
			ans++;
			++pp; ++tp;
		}
		else{
			tp++;
		}
	}
}
