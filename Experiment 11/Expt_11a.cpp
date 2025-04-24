#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int val;
  Node *left, *right;
  Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

void inorder(Node* root, vector<int>& res) {
  if (!root) return;
  inorder(root->left, res);
  res.push_back(root->val);
  inorder(root->right, res);
}

void preorder(Node* root, vector<int>& res) {
  if (!root) return;
  res.push_back(root->val);
  preorder(root->left, res);
  preorder(root->right, res);
}

int main() {
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

  vector<int> in, pre;
  inorder(root, in);
  preorder(root, pre);

  cout << "Inorder: ";
  for (int x : in) cout << x << " ";
  cout << "\nPreorder: ";
  for (int x : pre) cout << x << " ";
  cout << endl;
}