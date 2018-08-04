Node * next_successor_in_inorder(Node * root){
	if(!root)return NULL;
	if(root->right){
		Node *tmp = root->right;
		while(tmp->left){
			tmp = tmp->left;
		}
		return tmp;
	}
	else{
		Node *q = root, *x = root->parent;
		while(true){
			if(x->parent== NULL) return x;
			if(x->parent->left == x) return x;
			q = x; x = x->parent;
		}
		
	}
}
