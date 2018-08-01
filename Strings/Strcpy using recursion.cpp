#include<bits/stdc++.h>
using namespace std;

void copy(char s1[], char s2[], int index){
	s2[index] = s1[index];
	if(s1[index]== '\0') return;
	
	copy(s1, s2, index+1);
	
}

int main(){
	char s1[100], s2[100];
	cin>>s1>>s2;
	copy(s1, s2,0);
	cout<<s1<<"\n"<<s2;
	

return 0;	
}

