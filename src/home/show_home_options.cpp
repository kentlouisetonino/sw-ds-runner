#include "../helper/helper.hpp"

void show_home_options(int width) {
  option_formatter("1", "Queue", width);
  new_lines(1);
  option_formatter("2", "Binary Tree", width);
  new_lines(1);
  option_formatter("3", "Exit", width);
  new_lines(1);
}
