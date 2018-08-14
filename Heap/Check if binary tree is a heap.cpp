

int count_nodes(Node *root){
	if(!root)return 0;
	else return 1 + count_nodes(root->left) + count_nodes(root->right);
}

bool isHeapUtil(Node * root){
	if(root->left == root->right == NULL)return true;
	if(root->right==NULL){
		return root->data > root->left->data;	// second last level
	}	
	else {
	if(root->data > root->left  && root->data > root->right)return isHeapUtil(root->left)&& isHeapUtil(root->right);
	else return false;	
	
	}
}

bool isComplete(Node * root,int parent, int n){ // n is the total number of nodes in the heap here.
	if(!root) return true;
	if(parent >= n) return false;
	
	return isComplete(root->left, 2*parent+1, n) && isComplete(root->right, 2*parent+2,n);
}

bool isHeap(Node *root){
	int node_count = count_nodes(root);
	if(isComplete(root,0, node_count) && isHeapUtil(root) ) return true;
	return false;
}

