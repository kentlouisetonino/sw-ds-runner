#include "helper/helper.hpp"
#include "home/home.hpp"
#include "queue/queue.hpp"

int main(void) {
  bool is_valid_option = false;
  bool has_error = false;

  while (is_valid_option == false) {
    // Cleanup the terminal.
    clear_terminal();
    new_lines(2);

    // Computer program description.
    show_home_description(7);
    new_lines(3);

    // Show the instruction in choosing the option.
    show_home_instruction(8);
    new_lines(3);

    // Show error message.
    if (has_error) {
      option_error_formatter("Invalid input. Please try again.", 8);
      new_lines(3);
    }

    // Show the available data structure options.
    show_home_options(8);
    new_lines(3);

    // Show
    int option;
    option = get_home_input(8);

    if (option == 0) {
      if (std::cin.fail()) {
        has_error = true;
        clear_input_buffer();
      }

      continue;
    } else if (option == 1) {
      queue();
    } else {
      has_error = false;
      std::cout << option;
      new_lines(3);
      break;
    }
  }

  new_lines(3);
  return 0;
}
