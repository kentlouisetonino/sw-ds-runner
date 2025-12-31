#include "_libs/libs.hpp"
#include "handler_binary_tree/handler_binary_tree.hpp"
#include "handler_home/handler_home.hpp"
#include "handler_queue/handler_queue.hpp"

int main(void) {
  bool is_valid_option = false;
  bool has_error = false;

  while (is_valid_option == false) {
    int option;
    option = handler_home(has_error);

    if (option == 0) {
      has_error = true;
      continue;
    } else if (option == 1) {
      handler_queue();
      has_error = false;
      continue;
    } else if (option == 2) {
      handler_binary_tree();
      has_error = false;
      continue;
    } else if (option == 3) {
      break;
    } else {
      has_error = true;
      continue;
    }
  }

  new_lines(3);
  return 0;
}
