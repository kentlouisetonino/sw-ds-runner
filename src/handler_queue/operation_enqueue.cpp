#include "../_libs/libs.hpp"
#include <queue>
#include <string>
using namespace std;

queue<string> operation_enqueue(queue<string> queue_storage) {
  queue<string> current_queue = queue_storage;

  while (true) {
    clear_terminal();
    new_lines(3);

    blue_text("-----------------------------------------------------", 7);
    new_lines(2);
    green_text("Queue Enqueue Operation", 22);
    new_lines(2);
    white_text("Adds element to the end of the Queue.", 15);
    new_lines(2);
    blue_text("-----------------------------------------------------", 7);
    new_lines(3);

    string input;
    white_text("Enter element to be enqueue: ", 8);
    cin >> input;
    clear_input_buffer();
    new_lines(2);

    current_queue.push(input);
    white_text("Inserted:", 8);
    green_text(input, 1);
    new_lines(3);

    char try_again;
    white_text("Add another element? [y/n]: ", 8);
    cin >> try_again;
    clear_input_buffer();

    if (try_again == 'y') {
      continue;
    } else {
      break;
    }
  }

  return current_queue;
}
