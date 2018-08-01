void util(Node * root, int hd, map< int, vector<int> > &m){
    if(!root) return;
    
    m[hd].push_back(root->data);
    util(root->left, hd-1, m);
    util(root->right, hd+1, m);
}
void bottomView(Node *root)
{
    map<int , vector<int> >m;
    util(root, 0, m);
    map<int, vector<int> >:: iterator it;
    for(it = m.begin(); it != m.end(); it++ ){
        // for(int i=0; i<(it->second).size(); it++)
        cout<<(it->second[(it->second).size()-1])<<" ";
    }
   // Your Code Here
}

//Function only
