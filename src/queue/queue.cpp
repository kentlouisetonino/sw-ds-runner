#include "../helper/helper.hpp"

void queue(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_lines(2);

  // Show the option description.
  blue_text("-----------------------------------------------------", 7);
  new_lines(2);
  green_text("Queue", 29);
  new_lines(2);
  white_text("A Data Structure that follows FIFO order.", 13);
  new_lines(2);
  blue_text("-----------------------------------------------------", 7);
  new_lines(3);

  // Shwo the instructions.
  yellow_text("Please choose an operation for Queue:", 8);
  new_lines(3);

  // Show the queue options.
  option_formatter("1", "Enqueue", 8);
  new_lines(1);
  option_formatter("2", "Dequeue", 8);
  new_lines(1);
  option_formatter("3", "Display", 8);
  new_lines(1);
  option_formatter("3", "Check Front", 8);
  new_lines(1);
  option_formatter("4", "Check Rear", 8);
  new_lines(1);
  option_formatter("5", "Exit", 8);
  new_lines(3);

  // Handle the input.
  int input;
  white_text("Enter data structure option: ", 8);
  std::cin >> input;
}
