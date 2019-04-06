
Node * merge(Node * a, Node * b){

  if(!a && !b) return NULL;
  if(!a) return b;
  if(!b) return a;
  
  Node * res ;
  if(a->data < b->data){
    res = a;
    res->down = merge(a->down, b);
    
  }
  else{
    res = b; 
    res->down = merge(a, b->down);
  
  }
  return res;
  
  
  
}

Node * flatten(Node * root){

if(!root || ! (root->right)){
  return root;
  }
  return merge_sorted_list(root, flatten(root->right));

}
