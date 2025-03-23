#include "display/display.hpp"
#include "helper/helper.hpp"

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_lines(2);

  // Computer program description.
  show_main_description();
  new_lines(3);

  // Show the instruction in choosing the option.
  show_main_instruction();
  new_lines(3);

  // Show the available data structure options.
  show_options_main();
  new_lines(3);

  new_lines(3);
  return 0;
}
