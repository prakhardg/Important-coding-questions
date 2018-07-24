#include<bits/stdc++.h>
#define ss 7
using namespace std;
void swap(int *a, int *b){
	if(a==b)return;
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
int main(){
	stack<int> s1, s2;
	int a[ss];
	for(int i=0; i<ss; i++) {
	cin>>a[i];
	s1.push(a[i]);	
	}
	
	for(int i=0; i<ss; i++){
		if(i%2==0){
			if(!s2.size()){
				s2.push(s1.top());
				s1.pop();
			}
			while(s1.size()){
				int tmp = s1.top();
				if(s2.top() > tmp){
					swap(&(s1.top()) , &(s2.top()) );
				}
				else{
					s2.push(tmp);
					s1.pop();
				}
			}
			a[ss - i-1] = s2.top();
			s2.pop();
		}
		else{
				if(!s1.size()){
				s1.push(s2.top());
				s2.pop();
			}
			while(s2.size()){
				int tmp = s2.top();
				if(s1.top() > tmp){
					swap(&(s1.top()) , &(s2.top()) );
				}
				else{
					s1.push(tmp);
					s2.pop();
				}
			}
			a[ss - i-1] = s1.top();
			s1.pop();
		}
	}
	for(int i=0; i<ss;i++)cout<<a[i]<<" ";
	return 0;
}
