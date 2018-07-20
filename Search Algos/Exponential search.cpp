#include<bits/stdc++.h>
#define ss 7
using namespace std;

int BinarySearch(int a[], int low, int high, int x){
	int mid = low + (high-low)/2;
	if(a[mid] == x)
	return mid;
	
	if(low >high)
	return -1;
	
	if(x > a[mid])
	return BinarySearch(a, mid+1, high, x);
	
	if(x < a[mid])
	return BinarySearch(a, low, high -1, x);	
	
}


int ExponetialSearch(int a[], int i, int n, int x){
	
	if(x < a[0]  || x > a[n-1])
	return -1;
	
	if(x>a[i-1])
	return ExponetialSearch(a, max(i*2, n) , n, x);
	
	if(x < a[i-1])
	return BinarySearch(a, i/2, i, x);
	
	else return i-1;
}


int main(){
	int a[ss];
	for(int i=0; i<ss; i++) cin>>a[i];
	int x; cin>>x;
	int index = ExponetialSearch(a, 1,ss,x);
	if(index != -1)
	cout<<x<<" found at index "<<index;
	else cout<<x<<" is not present\n";
	return 0;
}
