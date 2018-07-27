#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
struct node{
    int i,j;
    int tim;
};

vector<pair<int, int > > get_nearby_fresh(int a[][y+1], int i, int j, int x, int y){
	vector <pair <int, int> > ans;
	if(a[i-1][j]==1) ans.push_back(make_pair(i-1, j));
	if (a[i+1][j] == 1) ans.push_back(make_pair(i+1,j));
	if(a[i][j-1] ==1)ans.push_back(make_pair(i, j-1));
	if(a[i][j+1]==1) ans.push_back(make_pair(i,j+1));
	return ans;
	/// Needs corrections
}

int main()
 {
 fast;
	int t; cin>>t;
while(t--){
    queue<node> q;
    int x,y;
    cin>>x>>y;
    int max_time = INT_MIN;
    int a[x+1][y+1];
    for(int i=0; i<x+1;i++){
    	a[i][0]=0;
    	a[i][y]=0;
    }
    
    for(int i=0; i<y+1; i++){
    	a[0][i]=0;
    	a[x][i]=0;
    }
    for(int i=1; i<x+1; i++){
        for(int j=1; j<y+1;j++){
            cin>>a[i][j];
            if(a[i][j] == 2){
			node nn;
            nn.i = i;
            nn.j= j; nn.tim = 0; q.push(nn);
            }
        }
    } 
    while(!q.empty()){
    	vector <pair <int,int> > fresh = get_nearby_fresh(a,q.front().i, q.front.j, x,y);
//	vector <pair <int, int> > ans;
//	int i = q.front().i, j = q.front.j
//	if(a[i-1][j]==1) ans.push_back(make_pair(i-1, j));
//	if (a[i+1][j] == 1) ans.push_back(make_pair(i+1,j));
//	if(a[i][j-1] ==1)ans.push_back(make_pair(i, j-1));
//	if(a[i][j+1]==1) ans.push_back(make_pair(i,j+1));
    	int cur_time = q.front().tim;
    	for(auto it = fresh.begin(); it < fresh.end(); it++){
    		node nn;
    		nn.i= it->first;
    		nn.j = it->second;
    		nn.tim = cur_time +1;
    		max_time = max(max_time, nn.tim);
    		if(a[nn.i][nn.j] !=2){
    			q.push(nn);
    			a[nn.i][nn.j]=2;
    		}
    	}
    	
    }
    bool flag = true;
    for(int i=0 ; i<x+1 && flag; i++){
    	for(int j=0; j<y+1 && flag; j++){
    		if(a[i][j]==1){
    			flag = false;
    		}
    	}
    }
    if(flag)cout<<max_tim<<endl;
    else cout<<"-1"<<endl;
    
 }
	return 0;
}
