#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	vector<int>pos;
	int count=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]== '[')
		pos.push_back(i);
		
	}
	int cb=0; int ans=0;
	for(int i=0; i<s.length();i++){
		if(s[i]=='['){
			count++; cb++;
		}
		else if(s[i]== ']'){
			--count;
			if(count<0){
				swap(s[i], s[pos[cb++]]);
				ans++;
				count+=2;
			}
		}
	}
	cout<<s<<endl<<ans;
	return 0;
}
