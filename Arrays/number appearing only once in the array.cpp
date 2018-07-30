#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n ; cin>>n;
    int a[n];
    for_i{
        cin>>a[i];
    }
    int ans = -1;
    for(int i=1; i<n && ans== -1; i+=2){
        if(a[i]!= a[i-1]) {
            // cout<<"ans before "<<ans<<endl;
            ans = a[i-1];
        }
    }
    if(ans == -1) {
        // cout<<"ans = "<<ans<<endl;
    ans = a[n-1];
        
    }
    cout<<ans<<endl;
 }
	return 0;
}
