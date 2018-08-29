#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> s1,s2;
	int choice;
	cin>>choice;
	while(choice != -1){
		
	
	switch(choice){
		case 1:
			//push in queue;
			int x; cin>>x;
			s1.push(x);
			break;
		case 2:
			// pop from queue and print element;
			if(s1.empty()&& s2.empty())
			cout<<"Queue is empty\n";
			else if(s2.size()){
			cout<<"Front element in the queue is "<<s2.top()<<endl;
			s2.pop();				
			}

			else{
				while(s1.size()){
					s2.push(s1.top());
					s1.pop();	
				}
			cout<<"Front element in the queue is "<<s2.top()<<endl;
			}	
			break;
			default:
				cout<<"No problem\n";
				break;
			
	}
}
	return 0;
}
