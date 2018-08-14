#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;

bool logic(int a, int b){
    string x, y;
    x = to_string(a);
    y = to_string(b);
    return x+y>y+x;
}
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    
    sort(v.begin(), v.end(), logic);
    string ans = "";
    auto it = v.begin();
    while(it!=v.end()){
        ans += to_string(*it);
        it++;
    }
    cout<<ans<<"\n";
 }
	return 0;
}
