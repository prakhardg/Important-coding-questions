#include<bits/stdc++.h>
#define ss 7
using namespace std;

void merge(int a[], int l, int m, int r){
	int n1, n2;
	n1 = m-l +1;
	n2= r-m;
	int L[n1], R[n2];
	for(int i=0; i<n1; i++){
		L[i] = a[l+i];
	}
	for(int i=0; i< n2; i++){
		R[i] = a[m+i+1];
	}
	int i=0,j=0,k=l;
	while(i <n1 && j< n2){
		if(L[i]<= R[j] ){
			a[k++] = L[i++];
		}
		else{
			a[k++] = R[j++];
		}
	}
	while(i < n1){
		a[k++] = L[i++];
	}
	while(j< n2)
	a[k++] = R[j++];
}

void mergesort(int a[], int l, int r){
	if(l<r){
		int m = l+(r-l)/2;
		mergesort(a,l, m);
		mergesort(a, m+1,r);
		merge(a, l,m,r);
	}
}


int main(){
	
	int a[ss];
	for(int i=0; i<ss; i++)cin>>a[i];
	mergesort(a,0, ss-1);
	for(int i=0; i<ss; i++)cout<<a[i]<<" ";
	return 0;
}
