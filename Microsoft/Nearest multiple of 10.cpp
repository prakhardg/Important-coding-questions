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
    string s; cin>>s;
    int n = s.length();
    if(n==1){
        if(s[0]-'0'<6) cout<<"0\n";
        else cout<<"10\n";
    }
    else if(s[n-1] - '0' <6){
        s[n-1] = '0'; 
        cout<<s<<endl;
    }
    else {
        int c=1;
        int x= n-2;
        s[n-1]='0';
        
        while(s[x]== '9'&& x>=0){
            s[x--]='0';
        }
        if(x<0){
            // cout<<"here..."<<s<<endl;
            s.insert(0, "1");
        }
        else s[x] = s[x]+1;
        
        cout<<s<<endl;
    }
 }
 
 return 0;
}
