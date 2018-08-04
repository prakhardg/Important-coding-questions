#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
	if(!t){cout<<"0\n"; return 0;}
while(t--){
    int n; cin>>n;
    int a[n];
    int lis[n];
    for_i{
        cin>>a[i];
        lis[i]=1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[j]<a[i]){
                lis[i] = max(lis[i], 1+lis[j]);
            }
        }
    }
    int ans = 0;
    for_i{
        ans = max(ans, lis[i]);
    }
    cout<<ans<<endl;
 }
	return 0;
}
