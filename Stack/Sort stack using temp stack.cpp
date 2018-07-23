#include<bits/stdc++.h>
using namespace std;

stack <int >sortStack(stack<int > input){
	stack<int > temp;
	while(!input.empty()){
		int tmp = input.top();
		input.pop();

		
//			cout<<tmp<<endl;
			while(temp.size() && tmp< temp.top()){
				input.push(temp.top());
				temp.pop();
//				cout<<input.top()<<endl;
			}
			temp.push(tmp);
		
	}
	return temp;
	
}

int main(){
	stack<int> input;
    input.push(34);
    input.push(3);
    input.push(31);
    input.push(98);
    input.push(92);
    input.push(23);
    
    stack <int > ans = sortStack(input);
    while(!ans.empty()){
    	cout<<ans.top()<<endl;
    	ans.pop();
    }
    return 0;
	
}
