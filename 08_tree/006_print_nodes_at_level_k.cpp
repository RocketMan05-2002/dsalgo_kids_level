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
void printAtK(Node* root, int k){
    if(k==0){
        cout<<root->key<<" ";
        return;
    }
    printAtK(root->left,k-1);
    printAtK(root->right,k-1);
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    int k;
    cin>k;
    printAtK(root,k);
    return 0;
}