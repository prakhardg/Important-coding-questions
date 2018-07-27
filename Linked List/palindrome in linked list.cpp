//Contains palindrom plus reversal of LL using recursion

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

bool util(Node **left, Node *right){
	if(!right) return true;
	bool a = util(left,right->next);
	if(!a) return false;
	
	bool b = ((*left)->data == right->data);
	(*left) = (*left)->next;
	return b;
}

bool palindrome(Node *t){
	util(&t, t);
}

void reverse(Node * t, Node * h){
	if(h){
		reverse(h, h->next);
		h->next = t;
	}
	else{
		head = t;
	}
}


void print(Node * h){
	Node *t = h;
	while(t){
		cout<<t->data;
		t = t->next;
	}
	return;
}

int main(){
	int n=5;
	int a[5] = {1,2,4,3,1};
	while(n>0){
		head = insert(a[--n]);
	}
//	cout<<palindrome(head);
	reverse(NULL, head);
	print(head);
	return 0;
}
