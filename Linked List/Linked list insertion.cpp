#include<bits/stdc++.h>
using namespace std;
typedef struct Node nn;
struct Node{
	int val; 
	struct Node * next;
}*head=NULL;

Node * insert(int v){
	Node *t = new Node;
	t->val  =v;
	t->next = NULL;
	if (!head) head = t;
	else{
		Node *tmp = head;
		while(tmp->next) tmp = tmp->next;
		tmp->next = t;
	}
	return head;
}

int find_length(Node * t){
	if(!t)return 0;
	return 1+ find_length(t->next);
	
}
void print_list(){
	if(!head)
	{
		cout<<"\nList is empty!\n";
		return;
	}
	
	Node *t = head;
	while(t){
		cout<<t->val<<" ";
		t = t->next;
	}
}
void delete_list(Node * head){
	if(!head)return;
	head  = head->next;
	delete_list(head);
	free(head);

}
bool find(Node *t, int v){
	if(!t) return false;
	if(t->val == v)
	return true;
	return find(t->next, v);
}

int middle(Node * head){
	Node * slow, * fast;
	slow = fast =  head;
	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow->val;
}

int main(){
	int n=5;
	int a[5] = {3,5,1,76,2};
	while(n>0){
		head = insert(a[--n]);
	}
	print_list();
	cout<<"\nLength = "<<find_length(head)<<endl;
	if(find(head, 5)) cout<<"5 is there\n";
//	delete_list(head);
//	head = NULL;
//	print_list();
	cout<<"Middle element is "<<middle(head);
	
}
