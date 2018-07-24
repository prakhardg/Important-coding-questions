#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int a[26];
	int b[26];
	for(int i=0; i<26; i++)a[i]=b[i] = 0;
	
	bool flag = true;
	if(s2.length()!= s1.length()){
		flag = false;
	}
	else {
		for(int i=0; i<s1.length(); i++){
			a[ s1[i] - 'a' ]++;
			b[s2[i] - 'a' ]++;
		}
		
		for(int i=0; i<26 && flag; i++){
			if(a[i]!=b[i]) flag = false;
			
		}
		if(flag) cout<<"Anagram\n";
		else cout<<"Not Anagram\n";
	}
	return 0;
}
