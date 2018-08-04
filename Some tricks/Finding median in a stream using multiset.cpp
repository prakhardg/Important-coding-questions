#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    multiset<int>ms;
    int i=0;
    for(; i<n; i++){
        int x; cin>>x; ms.insert(x);
        auto it = ms.begin();
        if(! (i%2)){
            cout<<*(it+i/2)<<endl;
        }
        else{
            int ans = *it + *(it + i/2);
            ans>>=1;
            cout<<ans<<endl;
        }
    }
 }
	return 0;
}
