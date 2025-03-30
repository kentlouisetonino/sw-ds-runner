#include "../helper/helper.hpp"
#include "./operation_enqueue.cpp"
#include <queue>

void show_queue(std::queue<std::string> current_queue) {
  std::queue<std::string> current = current_queue;

  while (!current.empty()) {
    // Print the values.
    std::string current_head = current.front();
    std::cout << "Current Head: " << current_head;
    new_lines(1);

    // Remove the current head.
    current.pop();
  }

  new_lines(1);
}

void queue(void) {
  std::queue<std::string> queue_storage;
  bool is_option_invalid = false;

  while (true) {
    // Cleanup the terminal.
    clear_terminal();
    new_lines(2);

    // TEMPORARY: Display the current queue.
    show_queue(queue_storage);

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
      break;
    } else if (input == 3) {
      break;
    } else if (input == 4) {
      break;
    } else if (input == 5) {
      break;
    } else if (input == 6) {
      break;
    } else {
      is_option_invalid = true;
      continue;
    }
  }
}
