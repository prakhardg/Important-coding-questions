#include<bits/stdc++.h>
using namespace std;
int absolute(int n){
	int mask = n>>31;
	return (n+ mask)^mask;
}
int TurnOff(int n, int k){
	return n & (~ (1<<(k-1)));
}

int TurnOn(int n, int k){
	return n | ( (1<<(k-1)));
}

int isSet(int nn, int kk){
	return nn & (1<<(kk-1));
}

int ToggleK(int n, int k){
	return n ^ (1<<(k-1));
}
int UnsetRightmost(int n){
	return n& (n-1);
}
int position(int n){
	n = n^(n& (n-1));
	int count=0;
	while(n){
		n>>=1; count++;
	}
	return count;
}

void parity(int n){
	bool p = true;
	while(n){
		p = !p;
		n = UnsetRightmost(n);
	}
	if(p) cout<<"Even parity";
	else cout<<"Odd parity";
	return;
}
//void parity_lookup(int n){
//	n = (n>>16)^(n<<16);
//	n = (n>>8)^(n<<8);
//	n = (n>>4)^(n<<4);
//	n = (n>>2)^(n<<2);
//	n = (n>>1)^(n<<1);
//	
//	if(n&1) cout<<"Odd parity";
//	else
//	cout<<"Even parity"<<endl;
//	return;
//}

int main(){
	int n; 
//	cin>>n;
//	cout<<"Parity is "<<endl;
//	parity_lookup(n);
	cout<<"\n";
	
	cout<<"Absolute finder. Enter a number to find its absolute."<<endl;
	cin>>n;
	cout<<"Absolute value is "<<absolute(n)<<endl;
	cout<<"Which bit to set off??";
	int k; cin>>k;
	n = TurnOff(n,k);
	cout<<"The number will be "<<n<<endl;
	n = TurnOn(n,k);
	cout<<"turn on "<<n;
	
	cout<<"\nCheck if kth bit is set? Enter n and k"<<endl;
	int nn, kk; cin>>nn>>kk;
	if(isSet(nn,kk))cout<<"Yes it is set\n";
	else
	cout<<"Not set"<<endl;
	cout<<ToggleK(nn,kk)<<" After toggling the kth bit\n";
	cout<<"\nUnsetting the rightmost set bit. Enter the number"<<endl;
	cin>>n;
	cout<<"After unsetting the rightmost set bit of "<<n<<" we get "<<UnsetRightmost(n);
	cout<<"\nRightmost set bit position. Enter n"<<endl;
	cin>>n;
	cout<<"Set bit is at "<<position(n);
	cout<<"Check parity of a number. Enter n"<<endl;
	cin>>n;
	parity(n);
	
	cout<<endl;

	
	return 0;
}
