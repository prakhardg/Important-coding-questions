#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int max_right(int a[], int index, int n){
    if(index == n-1){
        return 0;
    }
    int ans = INT_MIN;
    
    for(int i= index; i<n; i++)
    ans = max(ans, a[i]);
    return ans;
}


int max_left(int a[], int index, int n ){
    if(!index) return 0;
    int ans = INT_MIN;
    for(int i = index; i>=0; i--){
        ans = max(ans, a[i]);
    }
    return ans;
}

int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        
    }
    int water=0;
    for(int i=0; i<n; i++){
        water += max(min(max_left(a,i, n),  max_right(a,i, n)) - a[i], 0);
    }
    cout<<water<<endl;
 }
	return 0;
}
