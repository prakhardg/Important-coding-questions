#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
#define ll long long
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int m;
    cin>>m;
    int s[m];
    for(int i=0; i<m; i++)cin>>s[i];
    int n; cin>>n;
    int tbl[n+1];
    memset(tbl,0, sizeof(tbl));
    // for(int i=0; i<=n; i++) tbl[i]=0;
    tbl[0]=1;
    for(int i=0; i<m; i++){
        for(int j= s[i]; j<=n; j++){
            tbl[j] +=tbl[j-s[i]]; 
        }
    }
    cout<<tbl[n]<<"\n";
 }
 
 return 0;
}
