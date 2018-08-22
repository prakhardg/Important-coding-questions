#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *newNode(int item)
{
    struct Node *temp =  (struct Node *)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

void util(Node * root, int l, int &max_level){
	if(!root)return ;
	if(max_level < l){
		cout << root->data<<" ";
		max_level = l;
	}
	util(root->right, l+1, max_level);
	util(root->left, l+1, max_level);
	
}

void rightView(Node * root){
	int max_level =0;
	util(root, 1, max_level);
}

int main(){
	struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
 
    rightView(root);
 
    return 0;
}
