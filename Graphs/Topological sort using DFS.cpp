void util(int v, vector<int>g[], int vis[], stack<int>&st){
    vis[v]=1;
    auto it = g[v].begin();
    for(; it!=g[v].end(); it++){
        if(!vis[*it])
        util(*it, g, vis, st); 
    }
     st.push(v);
}

int * topoSort(vector<int> g[], int n)
{
   // Your code here
  int *ans = new int[n];
    // int ans[n];
   stack<int>st;
   int *vis = new int[n];
//   memset(vis, 0, sizeof(vis));
    
   
  for(int i=0; i<n;i++)vis[i]=0;
  
   for(int i=0; i<n; i++){
       if(!vis[i]){
           util(i, g,vis, st);
       }
   }
   int x=0;
   while(st.size()){
       ans[x++] = st.top(); 
       st.pop();
   }
   return ans;
}
