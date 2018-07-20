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

int main(){
	int a[ss];
	for(int i=0; i<ss; i++)cin>>a[i];
	int x; cin>>x;  /// Element to search;
	int index = BinarySearch(a, 0, ss-1, x);
	if(index == -1){
		cout<<"Element not found\n";
	}
	else{
		cout<<"Element "<<x<<" found at index "<<index<<endl;
	}
	return 0;
}
