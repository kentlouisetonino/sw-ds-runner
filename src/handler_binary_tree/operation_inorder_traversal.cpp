#include "types.hpp"
#include <iostream>
using namespace std;

/*
 * This function print the data from lowest to highest.
 *
 * */
void operation_inorder_traversal(BinaryTreeNode *root_node) {
  if (root_node != nullptr) {
    operation_inorder_traversal(root_node->left);
    cout << root_node->data << " ";
    operation_inorder_traversal(root_node->right);
  }
}
