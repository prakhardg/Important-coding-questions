#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t > 0)
	{
	    int n, k;
	    cin>>k>>n;
	    vector<int> v;
	    for(int i = 0; i < n; i++)
	    {
	        int j;
	        cin>>j;
	        if(i < k)
	        {
	            v.push_back(j);
	            sort(v.begin(), v.end());
	            if(i == k-1)
	            cout<<v[0]<<" ";
	            else
	            cout<<"-1 ";
	        }
	        else
	        {
	            if(j < v[0])
	            cout<<v[0]<<" ";
	            else
	            {
	                v.push_back(j);
	                sort(v.begin(), v.end());
	                vector<int> a(v.begin()+1, v.end());
	                v.clear();
	                for(int p = 0; p < k; p++)
	                v.push_back(a[p]);
	                cout<<v[0]<<" ";
	            }
	        }
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
