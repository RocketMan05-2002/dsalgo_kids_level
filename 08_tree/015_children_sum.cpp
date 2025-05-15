#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key = x;
        left = NULL;
        right = NULL;
    }
};

bool childrenSum(Node* root){
	if(root == NULL ) return true;
	if(root->left == NULL && root->right == NULL) return true;
	int sum = 0;
	if(root->left!=NULL) sum+=root->left->key;
	if(root->right!=NULL) sum+=root->right->key;
	return (root->key==sum && childrenSum(root->left) && childrenSum(root->right));
}

int main(){
    Node* root = new Node(80);
    root->left = new Node(40);
    root->right = new Node(40);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->left = new Node(10);
    root->right->right = new Node(30);
    // tree has been created
    bool flag = childrenSum(root);
    if(flag) cout<<"yes";
    else cout<<"no";
    return 0;
}