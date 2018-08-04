#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	string p;
	cin>>s>>p;
	set<int>myset;
	size_t pos = s.find(p,0);
	while(pos != string::npos){
		myset.insert(pos);
		pos = s.find(p, pos+1);
	}
	set<int> ::iterator it;
	for(it = myset.begin(); it!= myset.end(); it++){
		cout<<"Found at "<<*it<<endl;
	}
	return 0;
}
