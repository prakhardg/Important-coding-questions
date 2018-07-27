#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data; 
	struct Node * next;
}*head=NULL;

Node * insert(int v){
	Node *t = new Node;
	t->data  =v;
	t->next = NULL;
	if (!head) head = t;
	else{
		Node *tmp = head;
		while(tmp->next) tmp = tmp->next;
		tmp->next = t;
	}
	return head;
}

void remove_dup(Node * h){
	set <int > myset;
	if(!h || !(h->next))
	return ;
	Node * cur = h;
//	Node *nxt = cur->next;
	myset.insert(cur->data);
	while(cur&&cur->next){
		if(myset.find(cur->next->data) == myset.end() ){
			myset.insert(cur->next->data);
			cur = cur->next;
		}
		else{
			Node * tmp = cur->next;
			cur->next= cur->next->next;
			free(tmp);
		}
		
		
	}
	return ;
	
}
void printlist(){
	Node *t = head;
	while(t){
		cout<<t->data<<" ";
		t = t->next; 
	}
	return;
}

int main(){
	int a[] = {1,1,2,5,4,2};
	int n = sizeof(a) / sizeof(a[0]);
	while(n>0){
		head = insert(a[--n]);
	}
	remove_dup(head);
	printlist();
	return 0;
}
