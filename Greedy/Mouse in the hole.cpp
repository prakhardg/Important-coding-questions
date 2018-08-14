#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> mouse(n);
	vector<int> hole(n);
	for(int i=0; i<n;i++){
	int x; cin>>x;
	mouse.push_back(x);	
	}
	for(int i=0; i<n;i++){
		int x; cin>>x;
		hole.push_back(x);
	}
	sort(mouse.begin(), mouse.end());
	sort(hole.begin(),hole.end());
	int ans = INT_MIN;
	for(int i=0; i<n; i++){
		ans = max(abs(mouse[i]-hole[i]), ans);
	}
	cout<<ans<<endl;
}
