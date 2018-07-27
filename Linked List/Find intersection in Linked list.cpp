// find intersection in linked list (functions only)

int get_length(Node* h){
	Node *t;
	int ans=0;
	while(t){
		ans++;
		t = t->next;
	}
	return ans;
}

Node * intersection(Node * h1, Node * h2){
	int l1 = get_length(h1);
	int l2 = get_length(h2);
	Node * t = h1;
	while(t->next)t = t->next;
	Node * t2 = h2;
	while(t2->next) t2 = t2->next;
	if (t != t2) {
		return NULL;
	}
	t = h1; t2 = h2;
	int n = abs (l1-l2);
	if(l1 > l2){
		while(n--){
			t = t->next;
		}
	}
	else{
		while(n--){
			t2 = t2->next;
		}
	}
	
	while(t != t2){
		t = t->next;
		t2 = t2->next;
	}
	return t;
}
