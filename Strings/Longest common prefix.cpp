#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
string getprefix(string a, string b){
    string ans = "";
    int i=0;
    while(a[i]==b[i]){
        ans+=a[i++];
    }
    return ans;
}
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    string s[n];
    string ans;
    for(int i=0; i<n; i++)cin>>s[i];
    if(n==1) ans = s[0];
    else{
        for(int i=0; i<n-1; i++){
            if(!i){
                ans = getprefix(s[i], s[i+1]);
            }
            else{
                ans = getprefix(ans,s[i+1] );
            }
        }
    }
    if(ans.length())
    cout<<ans<<endl;
    else cout<<-1<<endl;
 }
	return 0;
}
