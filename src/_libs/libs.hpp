#ifndef LIBS_HPP
#define LIBS_HPP
#include "clear_terminal.cpp"
#include "new_lines.cpp"
#include "formatter.cpp"
#include "clear_input_buffer.cpp"
using namespace std;

/* Terminal cleaning functions. */
extern void clear_input_buffer(void);
extern void clear_terminal(void);
extern void new_lines(int number);

/* Formatting text functions. */
extern void option_formatter(string option, string type, int width);
extern void option_error_formatter(string error, int width);
extern void white_text(string text, int width);
extern void green_text(string text, int width);
extern void blue_text(string text, int width);
extern void yellow_text(string text, int width);

#endif
