#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	stack<char>st;
	
	int cur_max=0, msf=0;
	
	for(int i=0; i< s.length(); ){
		int val = s[i]=='(' ? 0:1 ;
//		cout<<val<<"\n";
		switch(val){
			case 0:
				st.push(s[i++]);
				break;
			case 1:
				if(st.empty()){
					cur_max=0; i++; break;
				}
				else if(st.top()== '('){
					st.pop();
//					cout<<"here\n";
					cur_max +=2;
					msf = max(cur_max, msf);
					i++; break;
				}
				else if(st.top()== ')' ){
					st.push(s[i++]);
					break;
				}
		}
		
	} 
	cout<<msf<<endl;
	return 0;
}
