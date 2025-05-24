#include "../_common/common.hpp"
#include "types.hpp"
#include <iostream>
#include <string>
using namespace std;

void _show_inorder_traversal(BinaryTreeNode *root_node) {
  if (root_node != nullptr) {
    _show_inorder_traversal(root_node->left);
    green_text(to_string(root_node->data), 8);
    _show_inorder_traversal(root_node->right);
  }
}

void operation_inorder_traversal(BinaryTreeNode *root_node) {
  while (true) {
    clear_terminal();
    new_lines(3);

    blue_text("-----------------------------------------------------------", 7);
    new_lines(2);
    green_text("Binary Tree", 31);
    new_lines(2);
    white_text("Operation Inorder Traversal", 23);
    new_lines(2);
    blue_text("-----------------------------------------------------------", 7);
    new_lines(3);

    if (root_node == nullptr) {
      yellow_text("Binary tree is empty.", 8);
      new_lines(3);
    } else {
      _show_inorder_traversal(root_node);
      new_lines(3);
    }

    char back;
    white_text("Go back to Binary tree menu? [y/n]: ", 8);
    cin >> back;
    clear_input_buffer();

    if (back == 'y') {
      break;
    } else {
      continue;
    }
  }
}
