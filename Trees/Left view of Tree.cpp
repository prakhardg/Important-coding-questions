void util(Node *root, int l, map<int,vector<int> >&m){
    if(!root) return;
    
    m[l].push_back(root->data);
    util(root->left, l+1, m);
    util(root->right, l+1, m);
}

void leftView(Node *root)
{
//   if(!root ) return;
//   cout<<root->data<<" ";
//   if(root->left) leftView(root->left);
//   else leftView(root->right);
    map<int, vector<int> >m;
    util(root,0, m);
    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->second[0]<<" ";
    }
    
    
}

// function only;
