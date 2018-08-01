#include<bits/stdc++.h>
using namespace std;

bool logic(char a[], char b[]){
	return strcmp(a,b) < 0;
}

int main(){
	int n; cin>>n;
	vector<char [50]> v;
	for(int i=0; i<n; i++){
		char s[50];
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), logic);
	for(int i=0; i<v.size(); i++){
		for(int j=0; j< strlen(v[i]); j++){
			cout<<v[i][j];
		}
		cout<<endl;
	}
	return 0;
}
