#include<bits/stdc++.h>
using namespace std;

int main(){
	
	stack<int> s;
	int choice;
	cout<<"Enter choice 1, 2 or 3\n";
	cin>>choice;
	int minE ;
	while(choice){
		
	
	switch(choice){
		case 1:
			cout<<"Push into stack\n";
			int n; cin>>n;
			if(s.empty()){
			s.push(n); minE = n;	
			}
			else{
				if(n > minE) s.push(n);
				else{
					s.push(2*n - minE);
					minE = n;
				}
			}
			break;
		
		case 2:
			cout<<"Pop from stack\n";
			if(s.empty())cout<<"Stack is empty";
			else{
				if(s.top() <= minE){
					minE = 2*minE - s.top();
					s.pop();
				}
				else{
					s.pop();
				}
				
			}
			break;
			
		case 3:
			cout<<"Show minimum element in the stack"<<endl;
			if(s.empty()){
			cout<<"No element in the stack currently.";
			}
			else
			cout<<minE<<" is the min element currently.";
			break;
		default:
			cout<<"Invalid choice\n";
		
	}
	cout<<"\n Enter choice again\n";
	cin>>choice;
	}
	return 0;
}
