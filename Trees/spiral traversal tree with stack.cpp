
void printSpiral(Node *root)
{

    if(!root) return;
    stack<Node*> s1, s2;
    s1.push(root);
    while(s1.size()|| s2.size()){
        while(s1.size()){
            Node * tmp = s1.top();
            s1.pop();
            cout<<tmp->data<<" ";
            if(tmp->right)
            s2.push(tmp->right);
            if(tmp->left)
            s2.push(tmp->left);

        }
        
        while(s2.size()){
            Node * tmp = s2.top();
            s2.pop();
            cout<<tmp->data<<" ";
            if(tmp->left)
            s1.push(tmp->left);  
            if(tmp->right)
            s1.push(tmp->right);
          
            
        }
    }
     
}
