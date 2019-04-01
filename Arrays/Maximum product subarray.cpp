#include <bits/stdc++.h>

using namespace std;

int maxProd(vector<int> &v){
    int n  = v.size();
    int pos_till_now, neg_till_now, max_prod;
    pos_till_now=  neg_till_now = max_prod = v[0];
    
    for(int i=1; i<n; i++){
        pos_till_now = max(max(pos_till_now*v[i], neg_till_now * v[i]), v[i]);
        
        neg_till_now = min(min(pos_till_now*v[i], neg_till_now*v[i]), v[i]);
        max_prod = max(max_prod, pos_till_now);
    }
    return max_prod;
    
    
}

int main()
{
    vector<int> v = {-2,3,8,0,-1, -2,9};
    cout<<maxProd(v);

    return 0;
}
