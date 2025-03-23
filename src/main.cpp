#include "display/display.hpp"
#include "helper/helper.hpp"
#include <iomanip>
#include <iostream>

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_line();
  new_line();

  // Computer program description.
  show_app_description();
  new_line();

  new_line();
  new_line();

  return 0;
}
