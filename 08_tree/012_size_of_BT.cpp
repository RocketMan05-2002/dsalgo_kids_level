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
int sizeOf(Node* root){
    if(root == NULL) return 0;
    return 1 + sizeOf(root->left) + sizeOf(root->right);
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
    int ans = sizeOf(root);
    cout<<ans;
    return 0;
}