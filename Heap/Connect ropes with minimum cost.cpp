#include<bits/stdc++.h>
using namespace std;
 
void util(priority_queue<int, vector<int>, greater<int> > &pq,  int &cost ){
	if(pq.size()==1)return;
	int tmp =0;
	tmp +=pq.top();
	pq.pop();
	tmp+=pq.top();
	pq.pop();
	cost+=tmp;
	pq.push(tmp);
	util(pq, cost);
}
 
int main(){
	int n; cin>>n;
	vector<int>v(n);
	int cost = 0;
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	priority_queue<int, vector<int>, greater<int> > pq; /// Template for min heap;	
	for(auto it = v.begin(); it!=v.end(); it++)pq.push(*it);
	util(pq, cost);
	cout<<cost<<endl;
	return 0;
 
}
