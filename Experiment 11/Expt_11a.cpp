#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int x) : val(x), left(0), right(0) {}
};

TreeNode* build(vector<int>& pre, int& i, int l, int r, unordered_map<int, int>& idx) {
  if (l > r) return 0;
  int val = pre[i++];
  TreeNode* root = new TreeNode(val);
  int mid = idx[val];
  root->left = build(pre, i, l, mid - 1, idx);
  root->right = build(pre, i, mid + 1, r, idx);
  return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
  unordered_map<int, int> idx;
  for (int i = 0; i < inorder.size(); ++i) idx[inorder[i]] = i;
  int i = 0;
  return build(preorder, i, 0, inorder.size() - 1, idx);
}

void printIn(TreeNode* root) {
  if (!root) return;
  printIn(root->left);
  cout << root->val << " ";
  printIn(root->right);
}

int main() {
  vector<int> preorder = {3, 9, 20, 15, 7};
  vector<int> inorder = {9, 3, 15, 20, 7};

  TreeNode* root = buildTree(preorder, inorder);

  cout << "Inorder traversal of the constructed tree: ";
  printIn(root);
  cout << endl;

  return 0;
}