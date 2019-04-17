


void fill_map(Node * root, int hd, map<int , vector< int> > &mp ){

if(!root) return;
  
  queue<pair<Node* , int>  >  q;
  q.push(make_pair(root, hd));
  while(q.size()){
    pair<Node * , int> tmp = q.front();
    q.pop();
    Node * t = tmp.first;
    hd=  tmp.second;
    mp[hd].push_back(t->data);
    if(t->left){
      q.push(  {t->left, hd-1} );
    }
    
    if(t->right){
      q.push(  { t->right, hd+1 } );
    }
    
  
  }
  
  
}

void printVerticalOrderUsingLevelOrder(Node * root){
  map<int , vector< int> > mp;
  fill_map(root, 0, mp);
  for(auto it = mp.begin(); it!= mp.end(); it++){
    for(auto i = it->second.begin(); i != it->second.end(); i++)
    cout<<*i<<" ";
    
  }
  cout<<endl;
  
  return;

}
