#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    unordered_map<int, int> m;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]*a[i]] = a[i];
    }
    sort(a,a+n);
    bool flag= false;
    for(int i=0; i<n-1 && !flag; i++){
        for(int j=i+1; j<n && !flag ;j++){
            if(m.find(a[i]*a[i] + a[j]*a[j]) != m.end() )
            flag = true;
        }
    }
    if(flag) cout<<"Yes\n";
    else cout<<"No\n";
 }
	return 0;
}
