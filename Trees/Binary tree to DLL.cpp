void BtoDLL(Node * root, Node ** head){
  if(!root) return;
  
  BtoDLL(root->right, head);
  
  root->right = *head;
  if(*head != NULL)
    (*head)->left = root;
    
  *head = root;
  BtoDLL(root->right, head);

}

main(){
  // Some function to create tree;
  Node * head = NULL;
  
  BtoDLL(root, &head);
  
  //Function to print the DLL;
  return;

}
