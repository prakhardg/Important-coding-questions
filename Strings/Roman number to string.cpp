#include<bits/stdc++.h>
using namespace std;
int val(char l){
	switch(l){
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}
}
int main(){
	string s;
	cin>>s;
	int ans =0;
	int last = INT_MAX;
	for(int i=0; i<s.length(); i++){
		if(val(s[i]) > last  ){
			ans -= last;
			ans += val(s[i]);
			ans -=last;
		}
		else{
			ans+=val(s[i]);
		}
		last = val(s[i]);
		
	}
	cout<<ans;
	return 0;
}
