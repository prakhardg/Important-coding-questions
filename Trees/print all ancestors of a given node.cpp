bool util(struct Node * root, int x){
         if(!root) return false;
     if(root->data  == x) return true;
     
     if(util(root->left,x) || util(root->right,x) )
     {
         cout<<root->data<<" ";
         return true;
     }
     else return false;
}

bool printAncestors(struct Node *root, int x)
{
     // Code here
     bool p = util(root, x);
     cout<<endl;
     return p;

}
