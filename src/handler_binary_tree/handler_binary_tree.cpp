#include "../_common/common.hpp"
#include "operation_inorder_traversal.cpp"
#include "operation_insert.cpp"
#include "operation_postorder_traversal.cpp"
#include "types.hpp"

void handler_binary_tree(void) {
  BinaryTreeNode *tree = nullptr;
  bool is_option_invalid = false;

  while (true) {
    clear_terminal();
    new_lines(3);

    blue_text("-----------------------------------------------------------", 7);
    new_lines(2);
    green_text("Binary Tree", 31);
    new_lines(2);
    white_text("A data structure where each node can have two children.", 9);
    new_lines(2);
    blue_text("-----------------------------------------------------------", 7);
    new_lines(3);

    yellow_text("Please choose an operation for Binary Tree:", 8);
    new_lines(3);

    if (is_option_invalid) {
      option_error_formatter("Invalid input. Please try again.", 8);
      new_lines(3);
    }

    option_formatter("1", "Insert Element in Tree", 8);
    new_lines(1);
    option_formatter("2", "Inorder Traversal", 8);
    new_lines(1);
    option_formatter("3", "Preorder Traversal", 8);
    new_lines(1);
    option_formatter("4", "Postorder Traversal", 8);
    new_lines(1);
    option_formatter("5", "Exit", 8);
    new_lines(3);

    int input;
    white_text("Enter data structure option: ", 8);
    std::cin >> input;
    clear_input_buffer();

    if (input == 5) {
      break;
    } else if (input == 1) {
      operation_insert(tree);
      is_option_invalid = false;
      continue;
    } else if (input == 2) {
      operation_inorder_traversal(tree);
      is_option_invalid = false;
      continue;
    } else if (input == 3) {
      operation_preorder_traversal(tree);
      is_option_invalid = false;
      continue;
    } else if (input == 4) {
      operation_postorder_traversal(tree);
      is_option_invalid = false;
      continue;
    } else {
      is_option_invalid = true;
      continue;
    }
  }
}
