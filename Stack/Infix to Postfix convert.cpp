#include<bits/stdc++.h>
using namespace std;
map<char, int> operator_priority_val;
void get_map(){
//	map<char, int> operator_priority_val;
	operator_priority_val['+'] =1;  
	operator_priority_val['-'] =1;
	operator_priority_val['/'] =2;
	operator_priority_val['*'] =2;
	operator_priority_val['^'] =3;
//	return operator_priority_val;

}


bool isOperand(char c){
	if (c >=48 && c  <=57) return true;
	else return false;
}
int main(){
	get_map();
	string exp; //Expression;
	cin>>exp;
	stack<char> st;
//	cout<<isOperand('+');
	int i=0;
	while(i < exp.length()){
		if(isOperand(exp[i])) cout<<exp[i++];
		else{
			if(exp[i] == '(' ) {
			st.push(exp[i++]);
			continue;
			}
			if(exp[i] == ')')
			{
				i++;
				// TODO Logic here.
				while(st.top() != '('){
					cout<<st.top();
					st.pop();
				}
				st.pop(); //// removing '(''
				continue;
			}
			
			else{
				if(st.empty()) 
				{
				st.push(exp[i++]); continue;	
				}
				
				if(operator_priority_val[st.top()] < operator_priority_val[exp[i]] ) st.push( exp [i++]);
				else{
					while( operator_priority_val[st.top()] >= operator_priority_val[exp[i]]  && ! st.empty()){
						
						
							cout<<st.top();
							st.pop();
							if(st.empty()){
								st.push(exp[i++]); break;
							}
						
					}
					//st.push(exp[i++]);
					
				}
			}
		}
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	return 0;
	
}
