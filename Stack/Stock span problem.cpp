#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	int a[7];
	for(int i=0; i<7; i++)cin>>a[i];
	int span[7];
	span[0]=1;
	st.push(0);
	
	for(int i=1; i<7; i++){
		while(st.size() && a[i]> a[st.top()] ){
			st.pop();
		}
		span[i] = st.empty()?i+1: i - st.top();
		st.push(i);
	}
	for(int i=0; i<7; i++) cout<<span[i]<<" ";
	cout<<endl;
	return 0;
}
