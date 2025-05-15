#include<iostream>
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

int balanced(Node* root){
    if(root == NULL) return 0;
    int lh = balanced(root->left);
    if(lh==-1) return -1;
    int rh = balanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return 1+ max(lh,rh);
}

// int height(Node* root){
// 	if(root == NULL) return 0;
// 	return 1+max(height(root->left), height(root->right));
// }
// bool balanced(Node* root){
//     if(root==NULL) return true;
//     int lh = height(root->left);
//     int rh = height(root->right);
//     return (abs(lh-rh)<=1 && balanced(root->left) && balanced(root->right));
// }
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left= new Node(60);
    root->left->left->right = new Node(70);
    // tree has been created
    bool flag = balanced(root);
    if(flag) cout<<"yes";
    else cout<<"no";
    return 0;
}