#include "../common/common.hpp"
#include "get_tree.cpp"
#include "operation_inorder_traversal.cpp"
#include "types.hpp"

void operation_insert(BinaryTreeNode *tree) {
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
    std::cin >> input;
    clear_input_buffer();

    /* Testing null pointer */
    tree = get_tree(tree, input);
    operation_inorder_traversal(tree);
  }
}
