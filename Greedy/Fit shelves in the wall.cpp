#include<bits/stdc++.h>
//#include <boost/math/common_factor.hpp> /// for finding boost::math::lcm(a,b)..............not used

using namespace std;

bool logic(pair<  pair<int,int>, int > a, pair<  pair<int,int>, int > b){
	return a.first.first < b.first.first;
}

int main(){
	int w,m,n; cin>>w>>m>>n;
	int small, large;
	small = min(m,n);
	large = max(m,n);
	int space = INT_MAX;
	vector< pair<  pair<int, int >, int > > v;
	for(int i=1;;i++){
		int j = (w - i*large)/small;
		
		if( w - (j*small + i*large)  <=space ){
			space  = w - (j*small + i*large);
			v.push_back(  make_pair(  make_pair(j,i),space ) );
		}
		if(!j) break;
//		space = min(space, );
		
	}
//	cout<<"sorted";
	sort(v.begin(), v.end(), logic);
	
	cout<<v[0].first.first<<" "<<v[0].first.second<<" "<<v[0].second<<endl;
	return 0;

	
}
