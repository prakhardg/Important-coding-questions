int left_h(Node * root){
    if(!root) return 0;
    return 1+ max(left_h(root->left),  left_h(root->right));
}

int right_h(Node * root){
    if(!root) return 0;
    return 1+ max(right_h(root->left), right_h(root->right));
}

int diameter(Node* root)
{
   // Your code here
   if(!root) return 0;
   return 1+ left_h(root->left) + right_h(root->right);
}

//Function only


