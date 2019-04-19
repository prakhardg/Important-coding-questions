// Assuming both keys are present in the tree.

Node * LCA(Node* root ,int n1 ,int n2 )
{
if(!root)
return NULL;
if(root->data == n1 || root->data == n2)
return root;
Node* leftLCA = LCA(root->left, n1, n2);
Node* rightLCA = LCA(root->right, n1, n2);
if(leftLCA and rightLCA)
return root;
return !leftLCA ? rightLCA : leftLCA;
}
