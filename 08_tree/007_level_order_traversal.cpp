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
int height(Node* root){
    if(root==NULL)return 0;
    return 1+max(height(root->left), height(root->right));
}
void printAtK(Node* root, int k){
    if(k==0){
        cout<<"-"<<root->key<<"-";
        return;
    }
    printAtK(root->left,k-1);
    printAtK(root->right,k-1);
}
void levelOrder(Node* root){
    int h = height(root);
    for(int i=0;i<h;i++){
        printAtK(root,i);
        cout<<endl;
    }
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
    levelOrder(root);
    return 0;
}