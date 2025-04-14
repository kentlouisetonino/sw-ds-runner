#include "../common/common.hpp"

void handler_binary_tree(void) {
  bool is_option_invalid = false;

  while (true) {
    // Cleanup the terminal.
    clear_terminal();
    new_lines(3);

    // Show the option description.
    blue_text("-----------------------------------------------------------", 7);
    new_lines(2);
    green_text("Binary Tree", 31);
    new_lines(2);
    white_text("A data structure where each node can have two children.", 9);
    new_lines(2);
    blue_text("-----------------------------------------------------------", 7);
    new_lines(3);

    // Show the instructions.
    yellow_text("Please choose an operation for Binary Tree:", 8);
    new_lines(3);

    // Show the error message.
    if (is_option_invalid) {
      option_error_formatter("Invalid input. Please try again.", 8);
      new_lines(3);
    }

    // Show the queue options.
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

    // Handle the input.
    int input;
    white_text("Enter data structure option: ", 8);
    std::cin >> input;
    clear_input_buffer();

    // Handle which operations to show.
    if (input == 5) {
      break;
    } else {
      is_option_invalid = true;
      continue;
    }
  }
}
