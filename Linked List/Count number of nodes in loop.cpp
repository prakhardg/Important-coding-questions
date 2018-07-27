#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};

struct Node *newNode(int key)
{
    struct Node *temp =
        (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}

int count(Node * t){
	int ans =1;
	Node * tt = t;
	while(t->next!= tt){
		++ans;
		t = t->next;
	}
	return ans;
}

int node_count_loop(Node* h){
	Node * slow, *fast;
	slow = fast = h;
	while(slow && fast && fast->next){
		slow= slow->next;
		fast = fast->next->next;
		if(slow == fast){
			return count(slow);
		}
	}
	return 0;
}


int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
 
    /* Created a loop for testing */
    head->next->next->next->next->next = head->next;
 
    printf("%d \n", node_count_loop(head));
 
    return 0;
}
