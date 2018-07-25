// Floyd cycle finding algorithm(function only)

void find_cycle(Node * head){
	Node * slow, *fast;
	slow= fast = head;
	while(slow && fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast){
			cout<<"found\n";
			return;
		}
		
	}
	cout<<"No loop\n"; return;
	
}
