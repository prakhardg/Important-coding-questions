#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main(){
	fast;
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		bool all_neg = true;
		int min_neg = INT_MIN;
		int a[n];
		for(int i=0; i<n; i++)cin>>a[i];
		for(int i=0; i<n && all_neg;i++) {
			if(a[i]>0) all_neg = false;
			min_neg = max(min_neg, a[i]);
		}
		if(all_neg){
			cout<<min_neg<<endl;
		}
		else{
			int cur_max = 0;
			int msf= INT_MIN;
			for(int i=0; i<n; i++){
				cur_max +=a[i];
				cur_max = cur_max > 0 ? cur_max: 0;
				msf = max(cur_max, msf);
			}
			cout<<msf<<endl;
		}
		
		
	}
	return 0;
}
