#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define pb push_back

ll mirror(string a)
{
    int i = 0, j = a.length()-1;
    while(i<j)
    {
        a[j--] = a[i++];
    }
    return stoll(a);
}

void solve()
{
    ll num; cin>>num;
    string nums = to_string(num);
    int n = nums.length();
    if(n==1)
    {
        cout<<(num)<<endl;
        return;
    }
    
    if(mirror(nums)==num)
    {
        cout<<nums<<endl;
        return;
    }
    
    ll normal = mirror(nums);
    ll plus = mirror( to_string(stoll(nums.substr(0,n/2))+1)+nums.substr(n/2) );
    cout<<plus<<" is plus\n";
    ll plus2 = mirror( to_string(stoll(nums.substr(0,n/2+1))+1)+nums.substr(n/2+1) );
    cout<<plus2<<" is plus2\n";
    
    ll minus = mirror( to_string(stoll(nums.substr(0,n/2))-1)+nums.substr(n/2) );
    cout<<minus<<" is minus\n";
    ll minus2 = mirror( to_string(stoll(nums.substr(0,n/2+1))-1)+nums.substr(n/2+1) );
    
    vector<ll>d;
    d.pb(normal);
    d.pb(plus); 
    d.pb(minus); 
    d.pb(minus2); 
    d.pb(plus2);
    
    ll diff = (ll) 1e15;
    ll ans = (ll) 1e15;
    for(auto val : d)
    {
        if(abs(val-num)<diff)
        {
            diff = abs(val-num);
            ans = val;
        } else if(abs(val-num)==diff)
        {
            ans = min(ans,val);
        }
    }
    
    cout<<ans;
    cout<<endl;
}

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}