//Left--->leaves--->> right(bottom up)

void printleaves(Node * root){
    if (root) { 
        printleaves(root->left); 
  
        if (!(root->left) && !(root->right)) 
            printf("%d ", root->data); 
  
        printleaves(root->right); 
    } 
}

void printleft(Node * root){
    if(root){
        if(root->left){
            cout<<root->data<<" ";
            printleft(root->left);
            
            
        }
        else if(root->right){
             cout<<root->data<<" ";
            printleft(root->right);
           
            
            
        }
    }
    
}

void printright(Node * root){
    if(root){
        if(root->right){
            printright(root->right);
            cout<<root->data<<" ";
            
        }
        else if(root->left){
               printright(root->left);
            cout<<root->data<<" ";
         
        }
    }
}
void printBoundary(Node *root)
{
     //Your code here
     if(root){
         cout<<root->data<<" ";
         printleft(root->left);
        printleaves(root->left);
         printleaves(root->right);
         
         printright(root->right);
          
     }
}
