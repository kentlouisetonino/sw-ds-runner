#include "../_libs/libs.hpp"
#include <queue>
#include <string>
using namespace std;

void operation_front(queue<string> queue_storage) {
  while (true) {
    clear_terminal();
    new_lines(3);

    blue_text("-----------------------------------------------------", 7);
    new_lines(2);
    green_text("Front Operation", 26);
    new_lines(2);
    white_text("Show the current front element in Queue.", 14);
    new_lines(2);
    blue_text("-----------------------------------------------------", 7);
    new_lines(3);

    white_text("Front element:", 8);
    green_text(queue_storage.front(), 1);
    new_lines(3);

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
