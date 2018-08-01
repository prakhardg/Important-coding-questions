#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

bool logic(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	fast;
	vector< pair<int, int> >v;
	map<int , int> m;
	int n; cin>>n;
	for(int i=0; i<n;  i++){
		int x; cin>>x; 
		if(m.find(x) == m.end()){
			m[x] = 1;
		}
		else{
			m[x]++;
		}
	}
	for(auto it = m.begin(); it!= m.end(); it++){
		v.push_back(make_pair(it->first, it->second));
	}
	sort(v.begin(), v.end(), logic);
	cout<<"After vector sorting\n";
	for(auto it= v.begin(); it!= v.end(); it++){
	    cout<<it->first<<" "<<it->second;
	    cout<<endl;
	}
	cout<<endl;
	int ans=0;
	for(auto it = v.begin(); it< v.end()-1; it++){
	    
		ans += it->second;
// 		cout<<ans<<endl;
	}
// 	cout<<ans<<endl;
// 	ans -= (v.end())->second;
	cout<<ans<<endl;
	return 0;
}
