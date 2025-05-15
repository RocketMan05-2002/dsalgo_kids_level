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
int maxWidth(Node* root){
	if(root == NULL) return 0;
	queue<Node*>q;
	q.push(root);
	int res = 0;
	while(!q.empty()){
		int count = q.size();
		res = max(res,count);
		for(int i=0;i<count;i++){
			Node* curr=  q.front();
			q.pop();
			if(curr->left!=NULL) q.push(curr->left);
			if(curr->right!=NULL) q.push(curr->right);
		}
	}
	return res;
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left= new Node(60);
    root->left->left->right = new Node(70);
    root->left->right->left = new Node(80);
    root->left->right->right = new Node(90);
    // tree has been created
    int ans = maxWidth(root);
    cout<<ans<<" ";
    return 0;
}