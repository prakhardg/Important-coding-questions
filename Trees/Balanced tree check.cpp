

int get_height(Node * root){
	if(!root) return -1;
	return max(get_height(root->left), get_height(root->right))+1;
}

bool isBalanced(Node *root){
	if(!root)return true;
	if (abs(get_heigt(root->left) - get_heigt(root->right)) >1) return false;
	else return isBalanced(root->left) && isBalanced(root->right); 
}
// Ineffient since it is running in O(nlogn)

// O(n) approach below:
	
int check_height(Node *root){
	if(!root)return -1;
	int l_height = check_height(root->left);
	if(l_height == INT_MIN) return l_height;
	
	int r_height = check_height(root->right);
	if(r_height==INT_MIN) return INT_MIN;
	int dif = abs(l_height - r_height);
	if(dif>1) return INT_MIN;
	else return max(l_height, r_height) +1;
	
}


bool isBalanced(Node *root){
	return check_height(root)!= INT_MIN;
}
