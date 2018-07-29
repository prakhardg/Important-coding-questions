#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int m,n;
    vector<int >a(m);
    int sum_a=0, sum_b=0;
    set<int> myset; bool flag = false;
    for(int i=0; i<m; i++){
        int x; cin>>x; 
        sum_a+=x;
        a.push_back(x);
    }
        for(int i=0; i<n; i++){
        int x; cin>>x;
        sum_b+=x;
        // b.push_back(x);
        myset.insert(x);
    }
    int dif = abs(sum_a - sum_b);
    if(dif%2)cout<<"-1\n";
    dif /=2;
    else{
        for(int i=0; i<m && !flag; i++){
            if(myset.find(a[i] - dif)  != myset.end())
            {
                flag = true;
            }
        }
        
        if(flag)cout<<"1\n";
        else cout<<"-1\n";
    }
    
 }
	return 0;
}
