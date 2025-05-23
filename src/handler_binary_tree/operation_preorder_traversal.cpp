#include "types.hpp"
#include <iostream>
using namespace std;

/*
 * Visit root first, then left, then right.
 *
 * */
void operation_preorder_traversal(BinaryTreeNode *root_node) {
  if (root_node != nullptr) {
    std::cout << root_node->data << " ";
    operation_preorder_traversal(root_node->left);
    operation_preorder_traversal(root_node->right);
  }
}
