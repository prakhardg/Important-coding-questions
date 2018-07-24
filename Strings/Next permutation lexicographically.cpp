#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
bool sort_logic(char a, char b){
	return a<b;
}

int main()
 {
 fast;
	int t; cin>>t;
while(t--){
	char s[6];
	cin>>s;
	sort(s, s + strlen(s));
	do{
		for(int i=0; i<strlen(s); i++){
			cout<<s[i];
		}
		cout<<"\n";
	}while(next_permutation(s, s+strlen(s)));
	fflush(stdin);
 }
	return 0;
}
