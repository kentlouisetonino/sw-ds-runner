#include "types.hpp"
#include <iostream>
using namespace std;

/*
 * Left first, then right, then root.
 *
 * */
void operation_postorder_traversal(BinaryTreeNode *root_node) {
  if (root_node != nullptr) {
    operation_postorder_traversal(root_node->left);
    operation_postorder_traversal(root_node->right);
    cout << root_node->data << " ";
  }
}
