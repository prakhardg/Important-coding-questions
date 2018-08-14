void dijkstra(int g[MAX][MAX], int s,int d)
{
    priority_queue< pair<int, int > >pq;
    pq.push({0,s});
    bool visited[d]={false};
    vector<int>dis(d,INT_MAX); dis[s]=0;
    while(!pq.empty()){
        pair<int,int>p = pq.top(); pq.pop();
        if(visited[p.second]) continue;
        visited[p.second] = true;
        for(int i=0; i<d; i++){
            if(!visited[i]){
                if(dis[i] > dis[p.second] + g[p.second][i]){
                    dis[i] = dis[p.second] + g[p.second][i];
                    pq.push({-1*dis[i],i}); //  since using max heap;
                }
            }
        }
    }
    for(auto i = dis.begin(); i!=dis.end(); i++){
        cout<<*i<<" ";
    }
    return;
}

// Dijkstra's Algo function only
