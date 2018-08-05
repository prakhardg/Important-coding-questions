#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int len = s.length();
	bool tbl[s.length()][s.length()];
	memset(tbl, false, sizeof(tbl));
	for(int i=0; i<len; i++)
	tbl[i][i]  = true;
	
	for(int i=0; i<len-1; i++){
		if(s[i]== s[i+1]){
			tbl[i][i+1] = true; // for len=2 of palindromes
			
		}
	}
	int max_len = 2;
	int k= 3;
	int low=0, high=0;
	for(; k<=len; k++){
		for(int i=0; i<len-k+1; i++){
			int end_index = i +k-1;
			if(tbl[i+1][end_index-1]  && s[i] == s[end_index] ){
			tbl[i][end_index] = true;
				max_len = max(max_len, k);
				low = i; high = end_index;	
			}
			
		}
		
		k++;
	}
	for(int i  = low; i<=high; i++)
	cout<<s[i];
	cout<<endl;
	return 0;
}
