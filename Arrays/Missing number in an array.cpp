#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    int sum=0;
    for(int i=0; i<n-1; i++){
        int x; cin>>x;
        sum+=x;
    }
    int ans = n*(n+1)/2 - sum;
    cout<<ans<<endl;
 }
	return 0;
}
