// function only

bool util(Node * r1, Node * r2){
	if(!r1 && !r2) return true;
	
	if(r1 && r2 && (r1->data == r2->data)){
		return util(r1->left, r2->right) && util(r1->right, r2->left);
	}
	return false;
}

bool isMirror(Node * root){
	return util(root, root);
}
