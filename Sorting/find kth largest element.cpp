#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"How many numbers in heap?"<<endl;
	int n; cin>>n;
	cout<<"Enter "<<n<<" numbers\n";
	priority_queue<int>pq;
	for(int i=0; i<n;i++){
		int x; cin>>x;
		pq.push(x);
	}
	int k; 
	cout<<"Enter k\n";
	cin>>k;
	for(int i=1; i<k;i++) pq.pop();
	cout<<"Your answer is "<<pq.top();
	cout<<endl;
}
