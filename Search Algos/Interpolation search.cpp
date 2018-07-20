#include<bits/stdc++.h>
#define ss 7
using namespace std; 

int interpolation(int a[], int low, int high, int x){
	while(low <=high && a[low]<= x && a[high]>= x){
		int pos = low + ( (float) (x-a[low])*(high-low) / (a[high]- a[low]) );
		if(a[pos] == x)
		return pos;
		if(a[pos] <x )
		return interpolation(a, pos+1, high, x);
		if(a[pos] > x) 
		return interpolation(a, low, high-1, x);
	}
}

int main(){
//	pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

	int a[ss];
	for(int i=0; i<ss; i++) cin>>a[i];
	int x; cin>>x; // value to search
	int index = interpolation(a, 0, ss-1, x);
	if(index== -1) cout<<"Element not found";
	else cout<<"Element "<<x<<" found at position "<<index;
	return 0;
}
