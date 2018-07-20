#include<bits/stdc++.h>
#define ss 7
using namespace std;
void swap(int *a, int *b){
	if(*a == *b) return;
	*a = *a^ *b;
	*b = *a^ *b;
	*a = *a^ *b;
}

int main(){
	int a[ss];
	for(int i=0; i<ss; i++)cin>>a[i];
	int last = ss-1;
	while(last!= 1){
		int j=0; 
		for(; j<last; j++){
			if(a[j] > a[j+1])
			swap(a+j, a+j+1);
		}
	--last;
	}
	for(int i=0; i<ss; i++)cout<<a[i]<<" ";
	return 0;
}
