#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int toggle(int n , int l, int r ){
    if(l>r) return n;
    return toggle( n ^ (1<<(l-1)) , l+1, r );
}
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n, l,r;
    cin>>n>>l>>r;
    cout<<toggle(n,l,r)<<endl;
 }
	return 0;
}
