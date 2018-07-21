#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	*a = *a^*b;
	*b = *a^ *b;
	*a =  *a^ *b;
}

void maxify(int a[], int i, int n){
	if(n==1) return;
	int j = 2*i;
	while(j<=n){
		if(j<n && a[j+1] > a[j] )
		j = j+1;
		
		if(a[j]<a[i])break;
		else{
			swap(a+i,a+j);
			j*=2;
		}
	}
}

void build(int a[], int n){
	for(int i = n/2 ; i>0;  --i)	//// Parent at largest index;
		maxify(a,i,n);
}

void heapsort(int a[], int n){
	build(a,n);
	
	int i = n;
	//cout<<"\before swap ..a[i] = "<<a[i]<<"...a[1] = "<<a[1]<<endl;
	
	for(i=n ; i>0;--i){
		if(i!=1)swap(&a[i] , &a[1] );
		//cout<<"\nAfter swap ..a[i] = "<<a[i]<<"...a[1] = "<<a[1];
		for(int x=1;  x<n+1 ;++x )
			cout<<a[x]<<" ";
			
			cout<<endl;
			cout<<"\na[i] = "<<a[i]<<endl;
			cout<<"i = "<<i<<endl;
		n-=1;
		maxify(a,1,n);
	}
}
int main(){
	int n; cout<<"Enter array size:\n";
	cin>>n;
	int a[n+1];
	cout<<"Enter the array:\n";
	for(int i=1;  i<n+1 ;++i ) cin>>a[i];
	build(a,n);
	
		for(int i=1;  i<n+1 ;++i )
			cout<<a[i]<<" ";
			
	cout<<"Heapsort?(y/n)\n";
	char c; cin>>c;
	if(c=='y'){
		heapsort(a,n);
	}
	cout<<endl;
	for(int i=1;  i<n+1 ;++i )
			cout<<a[i]<<" ";
}
