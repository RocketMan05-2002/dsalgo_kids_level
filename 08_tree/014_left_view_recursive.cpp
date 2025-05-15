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
int maxLevel = 0;
void leftView(Node* root, int level){
    if(root==NULL) return;
    if(maxLevel < level){
        cout<<root->key<<" ";
        maxLevel = level;
    }
    leftView(root->left, level+1);
    leftView(root->right,level+1);
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    // tree has been created
    leftView(root,1);
    return 0;
}