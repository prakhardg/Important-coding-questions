
bool isLeaf(Node *n){
    return !(n->left) && !(n->right);
}

int minLeafSum(Node* root)
{
	// Code here
	if(root== NULL) return 0;
	if(root->left== NULL && root->right == NULL) return root->data;
// 	int h = 0; 
	int sum=0;
	int min_level= INT_MAX;
	queue<pair<Node*, int>  > q;
	q.push({root, 0});
	while(! q.empty() ){
	    if(isLeaf(q.front().first) ){
	        if(min_level== INT_MAX)
	        min_level = q.front().second;
	        
	        if(q.front().second == min_level)
	        sum += (q.front().first)->data;
	        q.pop();
	    }
	    
	    else{
	        if((q.front().first)->left) 
	        q.push({(q.front().first)->left, 1+q.front().second});
	        
	        if((q.front().first)->right) 
	        q.push({(q.front().first)->right, (q.front().second)+1});
	        
	        q.pop();
	       // h++;
	    }
	}
	
	return sum;
	
}
