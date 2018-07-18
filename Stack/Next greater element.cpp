#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	int n = 5;
	map<int, int > m;
	for(int i=0; i<n; i++){
		int temp; cin>>temp;
		if(st.empty() || (st.size()&& st.top() > temp ) ){
			st.push(temp);
		}
		else{
			while(st.top() < temp){
				m[st.top()] = temp;
				st.pop();
				if(st.empty()){
					st.push(temp);
					break;
				}
			}
		}
	}
	while(st.size()){
		m[st.top()] = -1;
		st.pop();
	}
	for(std::map<int, int>::iterator it =  m.begin(); it!= m.end(); it++)
	{
		std::cout<< it->first<<" "<<it->second<<endl;
	}
	return 0;
}
