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
    vector<int>v(n);
    vector<int>ans(n,-1);
    for(int i=0; i<n;i++){
        // int x; cin>>x; v.push_back(x);
        cin>>v[i];
    }
    stack<pair<int , int>  >st;
    st.push({v[0],0});
    int i=1;
    while(i<n){
        if(st.size() && v[i] > st.top().first){
            ans[st.top().second] = v[i];
            st.pop();
        }
        else{
            st.push({v[i], i++});
        }
    }
    while(st.size()){
        ans[st.top().second] = -1;
        st.pop();
    }
    
    
    for(auto it = ans.begin(); it!= ans.end(); it++)cout<<*it<<" ";
    cout<<endl;
 }
	return 0;
}
