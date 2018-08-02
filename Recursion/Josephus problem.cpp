int fun(vector<int> &v, int n, int k, int i=0){
    if(v.size()==1) return v[0];
    i = (i+(k-1))%v.size();
    v.erase(v.begin()+i);
    return fun(v,n,k,i);
}

int josephus(int n, int k)
{
   //Your code here
   vector<int> v;
   for(int i=1; i<=n; i++) v.push_back(i);
   return fun(v,n,k,0);
}
// function only
