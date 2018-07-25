#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    string s;
    cin>>s;
    int n = s.length();
    int seen[256];
    memset(seen, -1, sizeof(seen));
    
    seen[s[0]] = 0;
    int cur_max=1, msf =1;
    int prev;
    for(int i=1; i<n;++i){
        prev = seen[s[i]];
        if(prev == -1 || i - cur_max > prev ){
        	cur_max ++;
			msf = max(cur_max, msf);
        }
        
        
        else{
            msf = max(cur_max, msf);
            cur_max = i-prev;
        }
        
        seen[s[i]] = i;
    }
    cout<<msf<<endl;
 }
	return 0;
}
