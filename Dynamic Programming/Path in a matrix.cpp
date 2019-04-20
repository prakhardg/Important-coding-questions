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
    int n; cin>>n;
    int dp[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>dp[i][j];
    }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0){
                dp[i][j] = max(dp[i][j] + dp[i-1][j] , dp[i][j]+ dp[i-1][j+1]);
            }
            else if(j==n-1){
                dp[i][j] = max(dp[i][j]+ dp[i-1][j],  dp[i][j]+ dp[i-1][j-1]);
            }
            else {
                dp[i][j] = max(dp[i][j]+dp[i-1][j-1], max(dp[i][j]+dp[i-1][j], dp[i][j]+ dp[i-1][j+1]));
            }
        }
    }
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        ans = max(dp[n-1][i], ans);
    }
    cout<<ans<<endl;
 }
 
 return 0;
}
