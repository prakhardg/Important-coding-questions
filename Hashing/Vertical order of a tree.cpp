#include<bits/stdc++.h>
using namespace std;

map<int ,vector<int> > m;
struct Node{
	int key; Node *left, *right;
};
struct Node* newNode(int key)
{
    struct Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

void getVertical(Node *root, int hd){
	if(!root) return;
	m[hd].push_back(root->key);
	getVertical(root->left, hd-1);
	getVertical(root->right, hd+1);
	return ;
}

void printVerticalOrder(Node * root){
	int hd =0;
	getVertical(root, hd);
	for(auto it = m.begin(); it != m.end(); it++){
		for(int i=0; i< it->second.size(); i++){
			cout<<it->second[i]<<" ";
		}
		cout<<"\n";
	}
	
	
	
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    cout << "Vertical order traversal is \n";
    printVerticalOrder(root);
    return 0;
}
