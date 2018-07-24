#include<bits/stdc++.h>
#define ss 6
using namespace std;

int main(){
	queue<int > q;
	stack<int> s;
	bool flag = true;
	for(int i=0; i<ss; i++){
		int x; cin>>x;
		q.push(x);
	}
	queue<int> temp;
	int ex = 1;
	
	while(! q.empty()&& flag){
		if(q.front() == ex){
			temp.push(ex++);
			q.pop();
			
		}
		else{
			s.push(q.front());
			q.pop();
		}
	}
	while(!s.empty() && flag){
		if(s.top() != ex){
			flag = false;
		}
		else{
			temp.push(ex++);
			s.pop();
		}
	}
	cout<<flag<<endl;
	
}
