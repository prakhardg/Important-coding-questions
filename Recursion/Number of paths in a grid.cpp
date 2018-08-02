#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;
int C(int n, int r){
    // if(r==0|| r==n) return 1;
    // if(r==1 || r==n-1) return n;
    // return C(n-1, r-1) + C(n-1,r);
     if(r > n / 2) r = n - r; 
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    cout<<C(x+y-2, min(x-1, y-1))<<endl;
 }
	return 0;
}
