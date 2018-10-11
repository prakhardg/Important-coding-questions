#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[] = {1, 2, 8, 10, 10, 12, 19};
	
	int n = sizeof(a)/sizeof(a[0]);
	vector<int >v(a, a+n);
	int x; cout<<"Enter a number to find its floor and ceiling\n";
	cin>>x;
	
	vector<int>:: iterator low =  lower_bound(v.begin(), v.end(), x);
	cout<<"Ceiling of "<<x<<" is "<<a[low - v.begin()];
	return 0;
}
