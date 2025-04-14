#include "../common/common.hpp"
#include "./operation_dequeue.cpp"
#include "./operation_enqueue.cpp"
#include "./operation_front.cpp"
#include "./operation_rear.cpp"

void handler_queue(void) {
  std::queue<std::string> queue_storage;
  bool is_option_invalid = false;

  while (true) {
    // Cleanup the terminal.
    clear_terminal();
    new_lines(3);

    // Show the option description.
    blue_text("-----------------------------------------------------", 7);
    new_lines(2);
    green_text("Queue", 29);
    new_lines(2);
    white_text("A Data Structure that follows FIFO order.", 13);
    new_lines(2);
    blue_text("-----------------------------------------------------", 7);
    new_lines(3);

    // Show the instructions.
    yellow_text("Please choose an operation for Queue:", 8);
    new_lines(3);

    // Show the error message.
    if (is_option_invalid) {
      option_error_formatter("Invalid input. Please try again.", 8);
      new_lines(3);
    }

    // Show the queue options.
    option_formatter("1", "Enqueue", 8);
    new_lines(1);
    option_formatter("2", "Dequeue", 8);
    new_lines(1);
    option_formatter("3", "Display", 8);
    new_lines(1);
    option_formatter("4", "Check Front", 8);
    new_lines(1);
    option_formatter("5", "Check Rear", 8);
    new_lines(1);
    option_formatter("6", "Exit", 8);
    new_lines(3);

    // Handle the input.
    int input;
    white_text("Enter data structure option: ", 8);
    std::cin >> input;
    clear_input_buffer();

    // Handle which operations to show.
    if (input == 1) {
      queue_storage = operation_enqueue(queue_storage);
      is_option_invalid = false;
      continue;
    } else if (input == 2) {
      queue_storage = operation_dequeue(queue_storage);
      is_option_invalid = false;
      continue;
    } else if (input == 3) {
      operation_display(queue_storage);
      continue;
    } else if (input == 4) {
      operation_front(queue_storage);
      is_option_invalid = false;
      continue;
    } else if (input == 5) {
      operation_rear(queue_storage);
      is_option_invalid = false;
      continue;
    } else if (input == 6) {
      break;
    } else {
      is_option_invalid = true;
      continue;
    }
  }
}
