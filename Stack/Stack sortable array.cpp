#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	int a[n];
	int b[n];
	stack <int>s;
	for(int i=0; i<n; i++)cin>>a[i];
	for(int i=0; i<n; i++)cin>>b[i];
	bool flag = true;
	int cur = 0;
	
	for(int i=0; i<n; i++){
		if(a[i]==b[cur])cur++;
		else {
			s.push(a[i]);
		}
	}
	while(!s.empty() && flag){
		if(s.top() == b[cur]){
			cur++; s.pop();
		}
		else{
			flag = false; 
		}
	}
	if(flag)cout<<"Yes\n";
	else cout<<"No!\n";
	return 0;
}
