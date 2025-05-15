#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node* left;
	Node* right;
	Node(int x) {
		key = x;
		left = NULL;
		right = NULL;
	}
};

// spiral (zigzag) level order traversal
void spiralOrder(Node* root) {
	if (root == NULL) return;
	deque<Node*> dq;
	dq.push_back(root);
	bool leftToRight = true;
	while (!dq.empty()) {
		int count = dq.size();
		vector<int> level;
		for (int i = 0; i < count; i++) {
			Node* curr = dq.front();
			dq.pop_front();
			level.push_back(curr->key);
			if (curr->left != NULL) dq.push_back(curr->left);
			if (curr->right != NULL) dq.push_back(curr->right);
		}
		if (!leftToRight) reverse(level.begin(), level.end());
		for (auto it : level) cout << it << " ";
		cout << endl;
		leftToRight = !leftToRight;
	}
}

int main() {
	Node* root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left = new Node(40);
	root->left->right = new Node(50);
	root->right->left = new Node(60);
	root->right->right = new Node(70);
	root->left->left->left = new Node(80);   // child of 40
	root->left->right->right = new Node(90); // child of 50
	root->right->left->left = new Node(100); // child of 60
	root->right->right->right = new Node(110); // child of 70

	spiralOrder(root);
	return 0;
}