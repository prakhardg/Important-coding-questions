#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
#define ll long long
using namespace std;

bool check(string s){
    int n = s.length();
    if(n==2) return s[0]==s[1];
    int ls, rs;
    ls=rs=0;
    for(int i=0; i<n/2; i++) ls += (s[i] - '0');
    for(int i= n/2; i<n; i++) rs += (s[i] - '0');
    return ls==rs;
}

int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    string s; cin>>s;
    int n = s.length();
    if(n%2)n--;
    bool flag = false;
    while(n && !flag) {
        for(int i=0; i+n <= s.length() && !flag; i++){
          string str = s.substr(i,n);  
          if(check(str)) {
              flag = true;
              cout<<n<<endl;
          }
        }
        n-=2;
        
    }
    if(!flag) cout<<0<<endl;
 }
 
 return 0;
}
