#include <bits/stdc++.h>
using namespace std;
stack <int> s;
 
void print_stack(){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return;
}
 
void push_at_bottom(int x){
	if(!s.size())s.push(x);
 
	else{
		int top = s.top();
		s.pop();
		push_at_bottom(x);
		s.push(top);
	}
}
 
 
void reverse(){
    if(s.empty())
    return;
    int top = s.top();
    s.pop();
    reverse();
    push_at_bottom(top);
}
 
int main()
{
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverse();
    print_stack();
 
 
 
    return 0;
}
