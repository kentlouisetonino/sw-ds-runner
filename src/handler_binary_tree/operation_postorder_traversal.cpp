#include "../_common/common.hpp"
#include "types.hpp"
#include <iostream>
#include <string>
using namespace std;

void _show_postorder_traversal(BinaryTreeNode *root_node) {
  if (root_node != nullptr) {
    _show_postorder_traversal(root_node->left);
    _show_postorder_traversal(root_node->right);
    green_text(to_string(root_node->data), 8);
  }
}

void operation_postorder_traversal(BinaryTreeNode *root_node) {

  while (true) {
    /* Cleanup the Terminal */
    clear_terminal();
    new_lines(3);

    /* Option Description */
    blue_text("-----------------------------------------------------------", 7);
    new_lines(2);
    green_text("Binary Tree", 31);
    new_lines(2);
    white_text("Operation Postorder Traversal", 21);
    new_lines(2);
    blue_text("-----------------------------------------------------------", 7);
    new_lines(3);

    if (root_node == nullptr) {
      /* Show that the tree is empty. */
      yellow_text("Binary tree is empty.", 8);
      new_lines(3);
    } else {
      _show_postorder_traversal(root_node);
      new_lines(3);
    }

    /* Ask user if want to exit. */
    char back;
    white_text("Go back to Binary tree menu? [y/n]: ", 8);
    cin >> back;
    clear_input_buffer();

    /* Handle the back input value. */
    if (back == 'y') {
      break;
    } else {
      continue;
    }
  }
}
