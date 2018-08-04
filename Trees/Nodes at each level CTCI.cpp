

void util(Node *root, int l, map<int, vector<int> >  &m){
	if(!root) return ;
	m[l].push_back(root->data);
	util(root->left, l+1, m);
	util(root->right, l+1, m);
	
}

void print_list_of_nodes_at_each_level(Node * root){
	map<int, vector<int> >m;
	util(root, 0, m);
	for(auto it = m.begin(); it != m.end(); it++){
		for(int i=0; i<it->second.size(); i++){
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
}

//fUNCTION ONLY
