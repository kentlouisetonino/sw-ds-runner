#include "./types.hpp"

/*
 * This function return the tree relative to
 * the node passed. If you passed the left/right
 * node, then it will return the tree based on that.
 * */
BinaryTreeNode *get_tree(BinaryTreeNode *root_node, int input) {
  if (root_node == nullptr) {
    return new BinaryTreeNode(input);
  }

  if (root_node->data == input) {
    return root_node;
  }

  if (root_node->data < input) {
    root_node->right = get_tree(root_node->right, input);
  } else {
    root_node->left = get_tree(root_node->left, input);
  }

  return root_node;
}
