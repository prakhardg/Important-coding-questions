#include<bits/stdc++.h>
using namespace std;
#define ss 5
int main(){
	int a[ss];
	int left[ss], right[ss];
	for(int i=0; i<ss; i++) cin>>a[i];
	stack<pair<int, int> > st;
	
	for(int i=0; i<ss; i++){
		pair<int , int >p;
		p.first = a[i];
		p.second = i;
		if(st.empty() || st.top().first >= a[i]){
			st.push(p);
		}
		
		else if(st.top().first < a[i]){
			right[st.top().second] = i+1;
			st.pop();
			i= i-1;
		}
	}
	while(st.size()){
		
		right[st.top().second] = 0;
		st.pop();
	}
	for(int i=0; i<ss; i++) cout<<right[i]<<" ";
	cout<<endl;
	
	for(int i= ss -1 ;  i>-1; i--){
		pair<int, int> p;
		p.first = a[i];
		p.second = i;
		if(st.empty() || st.top().first >= a[i] ){
			st.push(p);
		}
		else if(st.top().first < a[i]){
			left[st.top().second] = i+1;
			st.pop();
			++i;
		}
	}
	while(st.size()){
		left[st.top().second] = 0;
		st.pop();
	}
	int LRproduct = INT_MIN;
	for(int i=0; i<ss; i++){
		left[i] *= right[i];
		LRproduct = max(LRproduct, left[i]);
	}
	cout<<"Max LRProduct is "<<LRproduct<<endl;
	return 0;
}
