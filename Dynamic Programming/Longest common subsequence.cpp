#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int x,y; cin>>x>>y;
    // string s1, s2;
    char s1[101], s2[101];
    cin>>s1>>s2;
    x = strlen(s1);
    y = strlen(s2);
    // assert(s1.length()=x && s2.length()=y);
    int dp[x+1][y+1];
    for(int i=0; i<x+1;i++)dp[i][0]=0;
    for(int i=0; i<y+1; i++)dp[0][i]=0;
    for(int i=1; i<x+1; i++){
        for(int j=1; j<y+1; j++){
            if(s1[i-1]== s2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout<<dp[x][y]<<endl;
    
 }
	return 0;
}
