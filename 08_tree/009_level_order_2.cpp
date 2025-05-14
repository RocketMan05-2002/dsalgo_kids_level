#include<bits/stdc++.h>
#include<queue>
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
void levelOrder(Node* root){
    if(root == NULL) return;
    queue<Node* >q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i=0;i<count;i++){
            Node* curr = q.front();
            q.pop();
            cout<<curr->key<<" ";
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
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