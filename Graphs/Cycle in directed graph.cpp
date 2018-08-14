bool util(int i, int vis[], list<int> *adj){
    vis[i]=1;
    auto it=  adj[i].begin();
        
    for(; it!=adj[i].end();it++){
        if(vis[*it]==1) return true;
        if(!vis[*it]  && util(*it, vis, adj) ) return true;
        
    }
    vis[i] = 2;
    return false;
}


bool Graph :: isCyclic()
{
//Your code here
    int vis[V];
    memset(vis, 0, sizeof(vis));
    for(int i=0; i<V; i++){
        if(util(i, vis, adj))return true;
    }
    return false;
}
