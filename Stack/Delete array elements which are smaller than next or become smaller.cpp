#include<bits/stdc++.h>
#define ss 5
using namespace std;

int main(){
	int a[ss];
	for(int i=0; i<ss; i++)cin>>a[i];
	cout<<"Enter k ";
	int k;
	cin>>k;
	
	stack <int> s;
	int count =0;
	s.push(a[0]);
	for(int i=1; i<ss; i++){
		while(count <k && !s.empty() && s.top() < a[i]){
			s.pop(); count++;
		}
	}
	
	int i = s.size();
	vector <int> v(i);
	while(s.size()){
		v[--i] = s.top(); s.pop();
	}
	
	for(int  x=0; x< v.size() ; x++) cout<<v[x]<<" ";
	cout<<endl;
	return 0;
}
