// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_
template <typename T>
class BST {
 private:
  int depthTree(Node*) {
  if ((root->left == nullptr && root->right == nullptr) || (root == nullptr)) { return 0; }
  int ld = depthTree(root->left);
  int rd = depthTree(root->right);
  int depth;
  if (ld > rd)
    depth = ld + 1;
  else
    depth = rd + 1;
  return depth;
  }
  int searchNode(Node*, T) {
    if (root == nullptr) {
      return 0;
    } else if (root->value < value) {
      return searchNode(root->right, value);
    } else if (root->value > value) {
      return searchNode(root->left, value);
    } else {
      return root->count;
    }
  }
  Node* addNode(Node*, T) {
    if (root == nullptr) {
      root = new Node;
      root->value = value;
      root->count = 1;
      root->left = root->right = nullptr;
    } else if (root->value < value) {
      root->right = addNode(root->right, value);
    } else if (root->value > value) {
      root->left = addNode(root->left, value);
    } else {
      root->count++;
    }
      return root;
  }
  Node* root;

 public:
  BST() :root(nullptr) {}
  void add(T) {
    root = addNode(root, value);
  }
  int depth() {
    return depthTree(root);
  }
  int search(T) {
    return searchNode(root, value);
  }
  struct Node {
    T value;
    int count;
    Node* left;
    Node* right;
  };
};
#endif  // INCLUDE_BST_H_
