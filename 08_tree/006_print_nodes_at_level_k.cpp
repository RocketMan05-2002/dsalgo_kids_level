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
void fun(Node* root, int k, vector<int> &ds){
    if(root == NULL) return;
    if(k==0){
        ds.push_back(root->data);
        return;
    }
    fun(root->left,k-1,ds);
    fun(root->right,k-1,ds);
}
vector<int> Kdistance(Node *root, int k) {
    // Your code here
    vector<int>ds;
    fun(root,k,ds);
    return ds;
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