#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[] = {1, 4, 45, 6, 10, 8};
    int sum= 47;
    map<int, int > m;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++){
    	m[a[i]] = i;
    }
    for(int i=0; i<n; i++){
    	if(m.find(sum - a[i]) != m.end() ){
    		cout<<"Yes\n";
    		return 0;
    	}
    }
    cout<<"No"<<endl; 
    return 0;
    
}
