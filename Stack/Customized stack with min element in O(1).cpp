#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<pair<int, int> > st;
	int choice;
	cout<<"Enter the choice\n";
	cin>>choice;
	int minE;
	
	while(choice){
		switch(choice){
			case 1:
				{
								cout<<"Push into stack\n";
				int x; cin>>x;
				std::pair <int, int> p;
				if(st.empty()){
				p.first = x; p.second = x;
				st.push(p);
				minE = x;					
				}
				else{
					if(x>minE) {
					
					p.first = x;
					p.second = minE;
					st.push(p);
					}
					else{
						p.first = x; p.second =x; minE=x;
						st.push(p);
					}
				}
				break;
				}

			
			case 2:
				cout<<"Pop from stack\n";
				if(st.empty())
				cout<<"Cannot pop from the empty stack\n";
				else{
				cout<<"Last element inserted was "<<st.top().first<<endl;
				st.pop();
				}

				break;
			
			case 3:
				cout<<"Get top element \n";
				cout<<"Element at the top is "<<st.top().first<<endl;
				break;
			
			case 4:
				cout<<"Min element in the stack is "<<st.top().second<<endl;
				break;
			default:
				cout<<"Wrong choice\n";

				
		}
		cout<<"Enter the choice again?\n";
		cin>>choice;
	}
}
