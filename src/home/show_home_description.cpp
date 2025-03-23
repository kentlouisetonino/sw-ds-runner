#include "../helper/helper.hpp"

void show_home_description(int width) {
  blue_text("-----------------------------------------------------", width);
  new_lines(2);
  green_text("DSRunner", width + 22);
  new_lines(2);
  white_text("A CLI that implements different Data Structure.", width + 3);
  new_lines(2);
  blue_text("-----------------------------------------------------", width);
}
