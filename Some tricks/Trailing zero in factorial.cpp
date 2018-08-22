#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll power(ll n){
ll count = 0;
while(n%5==0&&n>0){
	n = n/5;
	count++;
}
return count;
}
 
 
int main(){
ll t;
cin>>t;
while(t--){
ll n; /// Number of trailing zeros required
cin>>n;
ll ts = 0;
ll i = 0;
while(ts<n){
	ts += power(i);
	i += 5;
}
if(ts==n){
	cout<<5<<endl;
	cout<<i-5<<" "<<i-4<<" "<<i-3<<" "<<i-2<<" "<<i-1<<endl;
}
else{
	cout<<0<<endl;
}
 
 
}
return 0;
 
}
