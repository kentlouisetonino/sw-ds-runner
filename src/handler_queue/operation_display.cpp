#include "../_common/common.hpp"
#include <queue>
#include <string>
using namespace std;

void show_queue(queue<string> queue_storage) {
  int queue_count = 1;
  std::queue<std::string> current = queue_storage;

  while (!current.empty()) {
    // Print the values.
    string current_head = current.front();
    option_formatter(to_string(queue_count), current_head, 8);
    queue_count++;
    new_lines(1);

    // Remove the current head.
    current.pop();
  }
}

void operation_display(queue<string> queue_storage) {
  while (true) {
    // Cleanup the terminal.
    clear_terminal();
    new_lines(3);

    // Show the option description.
    blue_text("-----------------------------------------------------", 7);
    new_lines(2);
    green_text("Queue Display Operation", 22);
    new_lines(2);
    white_text("Show all the elements of Queue.", 18);
    new_lines(2);
    blue_text("-----------------------------------------------------", 7);
    new_lines(3);

    /* Show the current queue. */
    if (queue_storage.size() == 0) {
      yellow_text("Queue storage is empty.", 8);
      new_lines(3);
    } else {
      show_queue(queue_storage);
      new_lines(2);
    }

    // Handle adding another values.
    char try_again;
    white_text("Show again? [y/n]: ", 8);
    cin >> try_again;
    clear_input_buffer();

    if (try_again == 'y') {
      continue;
    } else {
      break;
    }
  }
}
