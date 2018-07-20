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
	for(int i=0; i<ss; i++) cin>>a[i];
	for(int j=1; j<ss; j++){
		int k = j;
		while(k && a[k] < a[k-1]){
			swap(a+k , a+k-1);
			k--;
		}
	}
	for(int i=0; i<ss; i++) cout<<a[i]<<" ";
	return 0;
}
