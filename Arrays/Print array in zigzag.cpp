#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n-1; i++){
        if(i &1){
            if(a[i]<a[i+1]){
                std::swap(a[i] , a[i+1]);
            }
        }
        
        else{
            if(a[i]>a[i+1]) std::swap(a[i] , a[i+1]);
        }
    }
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    cout<<endl;
 }
	return 0;
}
