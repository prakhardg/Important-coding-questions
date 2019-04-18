void printSpiral(Node * root, int i, bool &flag){
    if(!root) return ;
    if(i==1) cout<<root->data<<" ";
    else if(i>1){
        if(!flag)
        {
            printSpiral(root->left, i-1, flag);
            printSpiral(root->right, i-1, flag);
        }
        
        else{
            printSpiral(root->right,  i-1, flag);
            printSpiral(root->left, i-1, flag);
        }
    }
    
}

int height(Node * root){
 if(!root) return 0;
 else{
     int l = height(root->left);
     int r = height(root->right);
     if(l>r)return l+1;
     else return r+1;
 }
}

void printSpiral(Node *root)
{
     //Your code here
     int h = height(root);
     bool flag  =  true;
     for(int i = 1; i <=h; i++){
         printSpiral(root, i, flag);
         flag = !flag;
     }
     
}
