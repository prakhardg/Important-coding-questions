
// function code only

void rtl(vector<int> &v){
    for(auto i = v.end()-1; i>=v.begin(); i--){
        cout<<*i<<" ";
    }
}

void ltr(vector< int > &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

void util(Node * root, int hd, map<int,  vector<int> > &m){
    if(!root) return;
    m[hd].push_back(root->data);
    // cout<<"hd = "<<hd<<" pushed "<<root->data<<endl;
    
    util(root->left, hd+1, m);
    util(root->right, hd+1, m);
}
void printSpiral(Node *root)
{
    map<int, vector<int> >m;
    util(root, 0, m);
    int x =0;
    auto it = m.begin();
    // it++;
    // rtl(it->second);
    
    for(; it!=m.end(); it++){
        // cout<<"here "<<it->first<<endl;
        if(x%2==0){
            rtl(it->second);
        }
        else{
            ltr(it->second);
        }
        x = (x+1)%2;
    }
     //Your code here
}
