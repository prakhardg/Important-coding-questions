#include<bits/stdc++.h>
using namespace std;
stack<int> s;


void delete_mid(){
	static int x =1;
	if(s.empty())return;
	int temp = s.top();
	s.pop();
	x++;
	delete_mid();
	static int a = x/2;
	x--;
	if(x != a)
	s.push(temp);
	return;
	
}

int main(){
	
	s.push(2);
	s.push(4);
	s.push(9);
	s.push(8);
	s.push(7);
//	s.push(1002);
	delete_mid();
	while(s.size()){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
