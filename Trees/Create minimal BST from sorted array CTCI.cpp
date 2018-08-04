Node * create_minimal_height_bst(int a[], int low, int high){
	if(low>high) return NULL;
	int mid = low + (high-low)/2;
	Node * t = new Node(a[mid]);
	t->left = create_minimal_height_bst(a, low, mid-1);
	t->right = create_minimal_height_bst(a, mid+1, high);
	return t;
}

// Function only
