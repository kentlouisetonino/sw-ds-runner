#include <iostream>
using namespace std;

/*
 * This function cleanup the input buffer
 * after using the cin for new input.
 *
 * */
void clear_input_buffer(void) {
  cin.clear();
  cin.ignore();
}
