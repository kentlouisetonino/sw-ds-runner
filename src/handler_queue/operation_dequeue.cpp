#include "./operation_display.cpp"
#include <queue>
#include <string>
using namespace std;

queue<string> remove_queue(queue<string> queue_storage, int num_input) {
  queue<string> temporary_queue = queue_storage;
  queue<string> current_queue;
  int iteration = 1;

  while (true) {
    if (temporary_queue.empty()) {
      iteration++;
      break;
    }

    if (iteration == num_input) {
      temporary_queue.pop();
      iteration++;
      break;
    }

    // Push the front the current queue.
    // Then remove from the temporary queue.
    current_queue.push(temporary_queue.front());
    temporary_queue.pop();
    iteration++;
  }

  while (true) {
    if (temporary_queue.empty()) {
      break;
    }

    current_queue.push(temporary_queue.front());
    temporary_queue.pop();
  }

  return current_queue;
}

queue<string> operation_dequeue(queue<string> queue_storage) {
  queue<string> current_queue = queue_storage;
  int current_queue_size = current_queue.size();
  bool invalid_input = false;

  while (true) {
    // Cleanup the terminal.
    clear_terminal();
    new_lines(3);

    // Show the option description.
    blue_text("-----------------------------------------------------", 7);
    new_lines(2);
    green_text("Queue Dequeue Operation", 22);
    new_lines(2);
    white_text("Remove a specific element in a Queue", 16);
    new_lines(2);
    blue_text("-----------------------------------------------------", 7);
    new_lines(3);

    // Check if elements is zero.
    if (current_queue.empty()) {
      option_error_formatter("Queue is empty.", 8);
      new_lines(3);

      char try_again;
      white_text("Go back to Queue menu? [y/n]: ", 8);
      cin >> try_again;
      clear_input_buffer();

      if (try_again == 'y') {
        break;
      } else {
        continue;
      }
    }

    // Show the messsage for invalid input.
    if (invalid_input) {
      option_error_formatter("Invalid queue number. Please try again.", 8);
      new_lines(3);
    }

    // Show the current queue.
    current_queue_size = current_queue.size();
    show_queue(current_queue);
    new_lines(2);

    // Handling the input.
    int input;
    white_text("Enter the number to Dequeue: ", 8);
    cin >> input;
    clear_input_buffer();
    new_lines(2);

    // Check if the input is valid.
    if (input < 1 && input > current_queue_size) {
      invalid_input = true;
      continue;
    }

    // Handle the removing of queue.
    current_queue = remove_queue(current_queue, input);

    // Show that success message that the queue is already removed.
    white_text("Successfully removed the queue num: ", 8);
    green_text(to_string(input), 2);
    new_lines(3);

    // Removed another element again.
    char try_again;
    white_text("Removed another element? [y/n]: ", 8);
    cin >> try_again;
    clear_input_buffer();

    // Handle try again.
    // Other than y, it will be treated as exit.
    if (try_again == 'y') {
      invalid_input = false;
      continue;
    } else {
      break;
    }
  }

  return current_queue;
}
