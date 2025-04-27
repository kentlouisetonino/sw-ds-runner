#include "../common/common.hpp"
#include "./types.hpp"

void operation_insert(BinaryTreeNode *root_node) {
  bool is_option_invalid = false;

  while (true) {
    /* Cleanup the Terminal */
    clear_terminal();
    new_lines(3);

    /* Check the Current Node Values */
    if (root_node != nullptr) {
      cout << "Data: " << root_node->data << endl;

      if (root_node->left != nullptr) {
        cout << "Left Data: " << root_node->left->data << endl;
      }

      if (root_node->right != nullptr) {
        cout << "Right Data:" << root_node->right->data << endl;
      }
    }
    //  if (root_node->left != nullptr) {
    //    cout << "Left Data" << root_node->left;
    //  }
    //  if (root_node->left != nullptr) {
    //    cout << "Right Data" << root_node->right;
    //  }

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
    cout << input;

    if (input > 0) {
      if (root_node == nullptr) {
        root_node = new BinaryTreeNode(input);
      } else {
        BinaryTreeNode *new_node = new BinaryTreeNode(input);
        BinaryTreeNode *current_left_node = root_node->left;
        BinaryTreeNode *current_right_node = root_node->right;

        if (current_left_node == nullptr) {
          root_node->left = new_node;
        } else if (current_right_node == nullptr) {
          root_node->right = new_node;
        } else {
          root_node->left = new_node;
        }
      }

      continue;
    } else {
      is_option_invalid = true;
      continue;
    }
  }
}
