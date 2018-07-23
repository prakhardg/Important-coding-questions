#include<bits/stdc++.h>
using namespace std;
stack <int>s;

void printstack(){
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return;
}

void push_at(int val){
	if(!s.size() || s.top() >= val )
		s.push(val);
	
	else{
		int t = s.top();
		s.pop();
		push_at(val);
		s.push(t);
	}
	
}

void sort(){
	if(!s.size())
	return;
	int top = s.top();
	s.pop();
	sort();
	push_at(top);
}

int main(){
	s.push(5);
	s.push(1);
	s.push(7);
	s.push(3);
	s.push(4);
	sort();
	printstack();
	return 0;
}
