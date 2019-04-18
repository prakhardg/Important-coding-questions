int util(Node * root, int &h){
    if(!root) return 0;
    int lh = util(root->left, h);
    int rh = util(root->right,h);
    h = max(h, lh+rh+1);
    return max(lh,rh)+1;
}

int diameter(Node* root)
{
    int h=-1;
   // Your code here
   int x = util(root, h);
   return h;
}
