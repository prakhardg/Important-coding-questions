#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int count_bits(int a, int ans){
    if(!a) return ans;
    
    return a%2 ? count_bits(a/2 , ans+1): count_bits(a/2, ans);
}

int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int a,b; cin>>a>>b;
    a = a^b;
    // cout<<a<<endl;
    cout<<count_bits(a,0)<<endl;
 }
	return 0;
}
