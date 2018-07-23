#include<bits/stdc++.h>
#define ss 7
using namespace std;

int main(){
	int a[ss];
	for(int i=0; i<ss; i++){
		cin>>a[i];
	}
	
	unordered_map <int, int> m;
	for(int i=0; i<ss; i++){
		auto it = m.find(a[i]);
		if(it != m.end()){
			++(it->second );
		}
		else{
			m.insert(make_pair(a[i], 1));
		}
	}
	stack<int > s;
	for(int i=0; i<ss; i++;){
		if(s.empty() || m[s.top()] > m[a[i]]){
			s.push(a[i]);
		}
		else{
			while(m[s.top] < m[a[i]] && ! s.empty()){
				cout<<s.top()<<" -> "<<a[i]<<endl;
				s.pop();
			}
			s.push(a[i]);
		}
	}
	while(!s.empty()){
		cout<<s.top()<<" -> "<<-1<<endl;
		s.pop();
	}
	return 0;
}
