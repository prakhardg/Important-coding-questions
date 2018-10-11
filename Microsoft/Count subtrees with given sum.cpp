
int util(Node * node, int &count, int x){
    if(!node) return 0;
    
    int ls= util(node->left, count, x);
    int rs = util(node->right, count, x);
    if(ls+rs+node->data  == x) count++;
    
    return ls+rs+ node->data;
}


int countSubtreesWithSumX(Node* root, int x)		//// First function;
{
	if (!root)return 0;
	int count=0;
	int ls = util(root->left, count,x);
	int rs = util(root->right, count,x);
	if(ls+rs+ root->data == x) count++;
	return count;
}
