#include<bits/stdc++.h>
using namespace std;
 
int fun(int a[], int n){
	int sum=0; int max_l = 0;
	unordered_map<int, int> m;
	for(int i=0; i<n; i++){
 
 
        if(!a[i] && !max_l) max_l=1;
	    if(!sum) max_l=i+1;  
	    sum+=a[i];
 
 
	    if(m.find(sum) != m.end()){
	        max_l = max(max_l, i-m[sum]);
	        cout<<"max_l after "<<i<<" is "<<max_l<<endl;
	    }
	    else{
	        m[sum]=i;
	    }
	}
    return max_l;
}
 
int main(){
	int a[] = {15, -2, 2, -8, 1, 7, 10, 23};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Largest len of subarray with zero sum = "<<fun(a,n);
}
