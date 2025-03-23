#include "helper/helper.hpp"
#include <iomanip>
#include <iostream>

int main(void) {
  // Cleanup the terminal.
  clear_terminal();
  new_line();
  new_line();

  // Computer program description.
  blue_text("-----------------------------------------------------", 5);
  new_line();
  new_line();
  green_text("DSRunner", 27);
  new_line();
  new_line();
  white_text("A CLI that implements different Data Structure.", 8);
  new_line();
  new_line();
  blue_text("-----------------------------------------------------", 5);
  new_line();

  new_line();
  new_line();

  return 0;
}
