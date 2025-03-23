#include "helper/helper.hpp"
#include "home/home.hpp"

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_lines(2);

  // Computer program description.
  show_home_description();
  new_lines(3);

  // Show the instruction in choosing the option.
  show_home_instruction();
  new_lines(3);

  // Show the available data structure options.
  show_home_options();
  new_lines(3);

  new_lines(3);
  return 0;
}
