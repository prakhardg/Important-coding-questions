#include<bits/stdc++.h>
using namespace std;
map <int , vector<int> > m;
struct Node
{
    int key;
    Node *left, *right;
};

struct Node* newNode(int key)
{
    struct Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

void findLCS(struct Node * root, int v1, int v2){
        bool found = false;
        struct Node * t = root;
        while(!found){
            if(t->key > v1 && t->key >v2){
                t = t->left; continue;
            }
            if(t->key < v1 && t->key <v2){
                t = t->right; continue;
                
            }
            else
                found = true;
        }
        cout<<t->key<<endl;
    }



int main()
{
    Node *root = newNode(8);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->left->right->left = newNode(5);
    root->left->left->right = newNode(2);
    root->left->left->right->right = newNode(3);
//    root->right->right->right = newNode(9);
    findLCS(root,1,5);
    return 0;
}
