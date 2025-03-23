#include "display/display.hpp"
#include "helper/helper.hpp"
#include <iomanip>
#include <iostream>

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_lines(2);

  // Computer program description and instructions.
  show_app_description();
  new_lines(3);
  yellow_text("Please choose an number for a Data Structure:", 8);
  new_lines(3);

  new_lines(3);
  return 0;
}
