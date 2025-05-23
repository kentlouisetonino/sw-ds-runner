#include "../_common/common.hpp"
#include "operation_preorder_traversal.cpp"
#include "types.hpp"
using namespace std;

BinaryTreeNode *_insert_node(BinaryTreeNode *root_node, int input) {
  if (root_node == nullptr) {
    return new BinaryTreeNode(input);
  }

  if (input < root_node->data) {
    root_node->left = _insert_node(root_node->left, input);
  } else if (input > root_node->data) {
    root_node->right = _insert_node(root_node->right, input);
  } else {
    return root_node;
  }

  return root_node;
}

void operation_insert(BinaryTreeNode *&tree) {
  bool is_option_invalid = false;

  while (true) {
    /* Cleanup the Terminal */
    clear_terminal();
    new_lines(3);

    /* Option Description */
    blue_text("-----------------------------------------------------------", 7);
    new_lines(2);
    green_text("Binary Tree: Insert", 27);
    new_lines(2);
    white_text("This allows you to insert a data in tree.", 16);
    new_lines(2);
    blue_text("-----------------------------------------------------------", 7);
    new_lines(3);

    /* Input Instruction */
    yellow_text("Please note, only number data is allowed.", 8);
    new_lines(3);

    /* Handle Error Message */
    if (is_option_invalid) {
      option_error_formatter("Invalid input. Please try again.", 8);
      new_lines(3);
    }

    /* Handle Input */
    int input;
    white_text("Enter data: ", 8);
    cin >> input;
    clear_input_buffer();

    /* Insert the new value in tree. */
    tree = _insert_node(tree, input);
    new_lines(2);

    /* Show the user that the value is successfully inserted. */
    green_text("New data inserted successfully.", 8);
    new_lines(3);

    /* Ask user if want to insert new value. */
    char try_again;
    white_text("Insert another data? [y/n]: ", 8);
    cin >> try_again;
    clear_input_buffer();

    /* Handle the try again input. */
    if (try_again == 'y') {
      continue;
    } else {
      break;
    }
  }
}
