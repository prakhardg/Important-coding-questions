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
	for(int i=0; i<ss; i++ )cin>>a[i];
	int sorted = 0; 
	while(sorted<ss-1){
		int j = sorted+1;
		int min_val  = INT_MAX;
		int min_index = j;
		for(;j<ss; j++){
			if(a[j] < min_val){
				min_index = j;
				min_val = a[j];
			}
		}
		swap((a+ (sorted+1)),  (a+min_index));
		j = sorted+1;
		while(a[j]< a[j-1] && j>0){
			swap(a+j, a+(j-1));
			j--;
		}
//		for(int i=0; i<ss; i++)cout<<a[i]<<" ";
//		cout<<endl;
		++sorted;
	}
	for(int i=0; i<ss; i++)cout<<a[i]<<" ";
	return 0;
}
