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

/*
 * This function print the data from lowest to highest.
 *
 * */
void operation_inorder_traversal(BinaryTreeNode *root_node) {
  while (true) {
    /* Cleanup the Terminal */
    clear_terminal();
    new_lines(3);

    /* Option Description */
    blue_text("-----------------------------------------------------------", 7);
    new_lines(2);
    green_text("Binary Tree", 31);
    new_lines(2);
    white_text("Inorder Traversal", 28);
    new_lines(2);
    blue_text("-----------------------------------------------------------", 7);
    new_lines(3);

    if (root_node == nullptr) {
      /* Show the user that the value is successfully inserted. */
      yellow_text("Binary tree is empty.", 8);
      new_lines(3);
    } else {
      _show_inorder_traversal(root_node);
      new_lines(3);
    }

    /* Ask user if want to insert new value. */
    char try_again;
    white_text("Go back to Binary tree menu? [y/n]: ", 8);
    cin >> try_again;
    clear_input_buffer();

    /* Handle the try again input. */
    if (try_again == 'y') {
      break;
    } else {
      continue;
    }
  }
}
