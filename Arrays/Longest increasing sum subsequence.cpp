#include<bits/stdc++.h>
using namespace std;

int LISsum(int a[], int n){
	int sum[n];
	for(int i=0; i<n; ++i) sum[i] = a[i];
	int i=1, j=0;
	for(; i<n; i++){
		for(int j=0; j<i; j++){
			if(a[j]< a[i] && sum[i] < sum[j]+a[i]  ){
				sum[i] += a[j]; 
			}
		}
	}
	int m = INT_MIN;
	for(int i=0; i<n; i++)cout<<sum[i]<< " ";
	cout<<endl;
	for(int i=0; i<n; i++) m = max(sum[i], m);
	return m;
}

int main(){
	int a[] = {1,101,2,3,102,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<LISsum(a,n);
	return 0;
}
