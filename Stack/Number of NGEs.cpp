#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[] = { 3, 4, 2, 7, 5, 8, 10, 6 };
    int n = sizeof(a) / sizeof(a[0]);
    int q; cin>>q;
    int dp[n];
//    std::fill_n(dp, sizeof(dp), -1);
	memset(dp, -1, sizeof(dp));
    int i=1;
    stack< pair<int, int> > st;
    st.push({0, a[0]});
    while(i<n ){
    	if((st.empty() || a[i] < st.top().second )){
//    		cout<<"here\n";
    		st.push( {i, a[i] });
    		++i;
    		if(i>=n)break;
    	}
    	else{
    		dp[st.top().first] = i;
    		st.pop();
    	}
    }
//    for(int i=0; i<n; i++)
//    cout<<dp[i]<<" ";
//    cout<<endl;
    
    
    while(q--){
    	int index ; cin>>index;
    	int ans=0;
    	while(index!=-1){
//    		cout<<"index = "<<index<<endl;
			ans++;
    		index = dp[index];
    	}
    	cout<<--ans<<"\n";
    }
    return 0;
}
