#include "../common/common.hpp"
#include <iostream>

int get_home_input(int width) {
  int input;

  white_text("Enter data structure option: ", width);
  std::cin >> input;

  return input;
}
