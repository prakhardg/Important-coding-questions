#include<bits/stdc++.h>
using namespace std;

struct Node{
	int key;
	struct Node * left;
	struct Node * right;
};

Node * newNode(int val){
	Node * temp = new Node;
	temp->key = val;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void levelOrderTraversal(Node *root){
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		cout<<q.front()->key<<endl;
		if(q.front()->left){
			q.push(q.front()->left);
		}
		if(q.front()->right)
		q.push(q.front()->right);
		q.pop();
	}
}

int main()
{
    // Let us create binary tree given in the above example
    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    levelOrderTraversal(root);
    return 0;
}
