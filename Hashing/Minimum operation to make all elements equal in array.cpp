#include<bits/stdc++.h>
using namespace std;

int FindMinDelCount(vector<int> &v){
    // cout<<"Here\n";
	map<int , int >m;
	for(int i=0; i<v.size(); i++){
		if(m.find(v[i]) == m.end()){
		    		// cout<<"here";
			m[v[i]] = 1;
		}

		else
			m[v[i]]++;
		
	}
	int max_freq = INT_MIN;
	for(auto it = m.begin(); it != m.end(); it++){
		max_freq = max(max_freq, it->second);
	}
	return v.size() - max_freq;
}

int main(){
	int n; cin>>n; 
	vector<int > v;
	for(int i=0; i<n; i++){
	    int x; cin>>x;
		v.push_back(x);
	}
// 	for(int i=0; i<n; i++)cout<<v[i]<<" ";
	cout<<FindMinDelCount(v);
	return 0;
}
