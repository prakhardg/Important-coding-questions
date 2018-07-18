#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int > st;
	int choice; 
	cout<<"Enter Choice\n";
	cin>>choice;
while(choice){
	
	switch(choice){
		case 1:
			cout<<"Enter the element in the stack\n";
			int x; cin>>x;
			st.push(x);
			int temp;
			for(int i=0; i<st.size()-1; i++){
				temp = st.front();
				st.pop();
				st.push(temp);
			}
			break;
		
		case 2:
			cout<<"Pop the element?\n";
			if(st.empty())cout<<"Stack is empty now\n";
			else{
			cout<<"The last inserted element is "<<st.front()<<endl;
			st.pop();				
			}

			break;
		
		default:
			cout<<"Invalid choice\n";
	}
	cout<<"Enter choice again:\n";
	cin>>choice;
}
	return 0;
}
