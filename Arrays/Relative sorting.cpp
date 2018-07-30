#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    set<int> s;
    vector<int> a, b, ans;
    for_i{
        int x; cin>>x; a.push_back(x);
        // cout<<a[i]<<endl;
    }
    // for_i cout<<a[i]<<" ";
    // cout<<endl;
    for(int i=0;i<k; i++){
        int x; cin>>x; b.push_back(x);
    }
    sort(a.begin(), a.end());
    vector<int>:: iterator it,it2;
    for(int i=0; i<k; i++){
        int x = b[i];
        it = lower_bound(a.begin(), a.end(), x);
        while(it < a.end() && *it == x){
            // cout<<"*it = "<<*it<<endl;
            ans.push_back(*it); it++;
            // it2 = ans.end()-1
            s.insert(x);
        }
    }
    int len = ans.size();
    for(auto it = a.begin(); it!= a.end(); it++){
        if(s.find(*it) == s.end()  ) ans.push_back(*it);
    }
    // cout<<*()<<endl<<endl<<endl;
    sort(ans.begin()+len, ans.end());
    // sort(ans.begin()+xx, ans.end());
    for(auto it = ans.begin(); it< ans.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
 }
	return 0;
}
