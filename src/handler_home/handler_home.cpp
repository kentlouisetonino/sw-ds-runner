#include "../_libs/libs.hpp"
#include "get_home_input.cpp"
#include "show_home_description.cpp"
#include "show_home_instruction.cpp"
#include "show_home_options.cpp"

int handler_home(bool has_error) {
  clear_terminal();
  new_lines(3);

  show_home_description(7);
  new_lines(3);

  show_home_instruction(8);
  new_lines(3);

  if (has_error) {
    option_error_formatter("Invalid input. Please try again.", 8);
    new_lines(3);
  }

  show_home_options(8);
  new_lines(2);

  int option;
  option = get_home_input(8);

  return option;
}
