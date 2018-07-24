#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin>>s1;
	cin>>s2;
	int m = s1.length(), n = s2.length();
//	cout<<m<<n;
	int dp[m+1][n+1];
	int mm = 0;
	for(int i=0; i<m+1; i++)dp[i][0] = 0;
	for(int i=0; i<n+1; i++)dp[0][i] = 0;
	for(int i= 1; i<m+1; i++){
		for(int j=1; j<n+1; j++){
			if(s1[i-1] == s2[j-1]){
//				cout<<s1[i-1]<<endl;
				
				dp[i][j] = dp[i-1][j-1] +1;
//				cout<<dp[i][j];
				if (dp[i][j] > mm ){
	//			cout<<"there ";
//				mm = dp[i][j]; 
				cout<<mm<<endl;	
				} 
			}
			else{
				dp[i][j]=0;
			}
		}
	}
//	cout<<mm <<endl;
	for(int i=0; i<n+1; i++){
		for(int j=0; j<m+1; j++){
			cout<<dp[i][j]<<" ";
		}
		
		cout<<endl;
	}
	return 0;
	
}
