#include<bits/stdc++.h>
using namespace std;

int mod_expo(int x, int y, int p){
	x  = x%p;
	int res =1;
	while(y){
		if(y & 1)
			res  = (res*x)%p;
			
			y >>=1;
			x = (x*x )%p;
			cout<<y<<endl;
		
	}
	return res;
}

int main(){
	int x,y,p;
	cin>>x>>y>>p;
	cout<<x<<" power "<<y<<" mod "<<p<<" is "<<mod_expo(x,y,p);
	return 0;
}
