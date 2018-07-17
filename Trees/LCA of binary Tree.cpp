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

struct Node * findLCA(struct Node * root, int v1, int v2){
	if(!root) return NULL;
	if(root->key == v1 || root->key ==v2)
	return root;
	
	struct Node * lnode, * rnode;
	lnode=  findLCA(root->left, v1,v2);
	rnode = findLCA(root->right, v1,v2);
	
	
	if(lnode && rnode)return root;
	return lnode?lnode:rnode;
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
    cout<<"LCA of 4 and 5 is "<<findLCA(root,4,5)->key;
    return 0;
}
