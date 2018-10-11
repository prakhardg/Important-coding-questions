void util(int i, bool vis[], stack<int> &st, list<int>adj[] ){
    vis[i] = true;
    list<int>:: iterator it;
    for(it = adj[i].begin(); it!= adj[i].end(); it++){
        if(!vis[*it])
        util(*it, vis, st, adj);
    }
    st.push(i);
}

string printOrder(string dict[], int n, int k)
{
   list<int> * adj;
   adj = new list<int>[k];
   bool visited[k];
   for(int i=0; i<k; i++) visited[i] = false;
   for(int i=0; i<n-1; i++){
       string w1 = dict[i], w2 = dict[i+1];
       for(int j =0 ; j< min(w1.length(), w2.length()); j++){
           if(w1[j]!= w2[j]){
               adj[w1[j]-'a'].push_back(w2[j]-'a');
               break;
           }
       }
   }
   
   string ans = "";
   stack<int>st;
   for(int i=0; i<k; i++){
       if(visited[i]==false)
       util(i, visited, st, adj);
   }
   while(st.size()){
       ans += ('a'+ st.top());
       st.pop();
   }
   return ans;
   
}
