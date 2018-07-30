#include<bits/stdc++.h>
using namespace std;
void swap(int *a , int *b){
	if(*a==*b)return;
	
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
void sort_arr(int a[], int n){
	int low, mid, high;
	low= mid= 0; high = n-1;
	while(mid<= high){
		switch(a[mid]){
		case 0:
			swap(&a[low++], &a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(&a[mid], &a[high--]);
			break;
	}		
	}

	return;
}

int main(){
	int a[] = {2,0,1,1,0,0,1,2,1,1,1,0};
	int n= sizeof(a)/sizeof(a[0]);
	sort_arr(a, n);
	for(int i=0; i<n; i++)cout<<a[i]<<" ";
	return 0;
}
