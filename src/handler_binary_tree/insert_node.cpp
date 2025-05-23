#include "types.hpp"

BinaryTreeNode *insert_node(BinaryTreeNode *root_node, int input) {
  if (root_node == nullptr) {
    return new BinaryTreeNode(input);
  }

  if (input < root_node->data) {
    root_node->left = insert_node(root_node->left, input);
  } else if (input > root_node->data) {
    root_node->right = insert_node(root_node->right, input);
  } else {
    return root_node;
  }

  return root_node;
}
