#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
#define for_i for(int i=0; i<n; i++)
using namespace std;

struct Key{
    int freq; 
    char ch;
};
int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    string s; cin>>s;
    int n = s.length();
    int f[26];
    memset(f, 0, sizeof(f));
    for(int i=0; i<n; i++){
        f[s[i] - 'a']++;
    }
    priority_queue<Key> pq;
    for(int i=0; i<26;i++){
        if(f[i]) {
            Key k;
            k.ch = (char)(i+'a');
            k.freq = f[i];
            pq.push(k);
        }
    }
    string ans = "";
    Key prev;
    prev.freq = -1;
    prev.ch = '#';
    while(!pq.empty()){
        Key cur = pq.top();
        pq.pop();
        ans += cur.ch;
        if(prev.freq >0)pq.push(prev);
        cur.freq -= 1;
        prev.freq = cur.freq;
        prev.ch = cur.ch;
    }
    if(ans.length()==n) cout<<"1\n";
    else cout<<"0\n";
 }
	return 0;
}.

