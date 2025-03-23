#include "display/display.hpp"
#include "helper/helper.hpp"
#include <iomanip>
#include <iostream>

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_lines(2);

  // Computer program description.
  show_app_description();
  new_lines(3);

  // Show the instruction in choosing the option.
  show_app_instruction();
  new_lines(3);

  new_lines(3);
  return 0;
}
