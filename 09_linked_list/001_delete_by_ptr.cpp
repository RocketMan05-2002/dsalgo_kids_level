#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node* next;
	Node(int val){
		key = val;
		next = NULL;
	}
};
void deleteByPtr(Node* ptr){
	// 6 -> delete
	// Node* temp = ptr;
	// ptr = ptr->next;
	// delete(temp);
	ptr->key=ptr->next->key;
    ptr->next = ptr->next->next;
}
void printer(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->key<<" ";
		temp=temp->next;
	}
}
int main(){
	Node* root = new Node(5);
	Node* temp2 = new Node(6);
	root->next = temp2;
	root->next->next = new Node(7);
	printer(root);
	cout<<endl;
	deleteByPtr(temp2);
	printer(root);
	return 0;
}