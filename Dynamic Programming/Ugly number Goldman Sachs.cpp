// Numbers with factors of only 2,3 and 5 are ugly numbers

#include<bits/stdc++.h>
using namespace std;

int ugly(int n){
	vector<int> v(1,1);
	int i=0,j=0,k=0;
//	i=j=k;
	while(v.size()<n){
		v.push_back(min(v[i]*2 , min(  v[j]*3, v[k]*5)  ));
		cout<<v.back()<<"here\n";
		if(v.back()== v[i]*2) i++;
		if(v.back()== v[j]*3)j++;
		if(v.back()== v[k]*5) k++;
		cout<<"i="<<i<<" j="<<j<<" k="<<k<<endl;
	}
	return v.back();
}

int main(){
	int n; cin>>n;
	cout<<ugly(n);
	return 0;
}
