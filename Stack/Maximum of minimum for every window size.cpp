#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
#define ll long long
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    int n;
     cin>>n; 

    vector<int>v;
   
    for_i {
    	int x; cin>>x;
    	v.push_back(x);
    };
    // for_i cout<<v[i]<<"...";
    vector <int> next_smaller;
    vector<int> prev_smaller;
    
    for(int i=0 ; i<n; i++){
    	next_smaller.push_back(n);
    	prev_smaller.push_back(-1);
    }
    
    
    stack<pair <int, int> > st;
    int i=0;
    while(i < n){
        if(st.empty() || st.top().first <= v[i]){
            st.push(make_pair(v[i], i));
        }
        else{
            while(st.size() && st.top().first > v[i]){
                next_smaller[st.top().second] = i;
                st.pop();
            }
            st.push(make_pair(v[i], i));
            
        }
        i++;
    }
    while(st.size()){
        st.pop();
    }
    i=n-1;
    while(i>=0){
        if(st.empty() || st.top().first <= v[i] ){
            st.push(make_pair(v[i], i));
        }
        else{
        	while(st.size() && st.top().first > v[i]){
            prev_smaller[st.top().second] = i;
            st.pop();
        	}
        	st.push(make_pair(v[i], i));
        }
         i--;
    }
    while(st.size()){
        st.pop();
    }
    
    

    
    
    
    vector<int >ans(n+1,0);
    for(int i=0; i<n; i++){
        int len = next_smaller[i] - prev_smaller[i] -1;
        ans[len] = max(ans[len], v[i]);
    }
    for(int i=n-1; i>0; i--){
        ans[i] = max(ans[i], ans[i+1]);
    }
    for(int i=1; i<n+1;i++)cout<<ans[i]<<" ";
    cout<<endl;
 }
 
 return 0;
}
