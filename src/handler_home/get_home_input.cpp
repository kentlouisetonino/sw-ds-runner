#include "../helper/helper.hpp"
#include <iostream>

int get_home_input(int width) {
  int input;

  // Handle the input.
  white_text("Enter data structure option: ", width);
  std::cin >> input;

  return input;
}
