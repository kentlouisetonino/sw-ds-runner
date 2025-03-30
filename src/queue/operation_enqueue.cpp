#include "../helper/helper.hpp"
#include <queue>
#include <string>

std::queue<std::string>
operation_enqueue(std::queue<std::string> queue_storage) {
  std::queue<std::string> current_queue = queue_storage;

  while (true) {
    // Cleanup the terminal.
    clear_terminal();
    new_lines(3);

    // Show the option description.
    blue_text("-----------------------------------------------------", 7);
    new_lines(2);
    green_text("Enqueue Operation", 24);
    new_lines(2);
    white_text("Adds element to the end of the Queue.", 15);
    new_lines(2);
    blue_text("-----------------------------------------------------", 7);
    new_lines(3);

    // Handle the input.
    std::string input;
    white_text("Enter element to be enqueue: ", 8);
    std::cin >> input;
    clear_input_buffer();
    new_lines(2);

    // Show the inserted value.
    current_queue.push(input);
    white_text("Inserted:", 8);
    green_text(input, 1);
    new_lines(3);

    // Handle adding another values.
    char try_again;
    white_text("Add another element? [y/n]: ", 8);
    std::cin >> try_again;
    clear_input_buffer();

    if (try_again == 'y') {
      continue;
    } else {
      break;
    }
  }

  return current_queue;
}
