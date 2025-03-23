#ifndef HELPER_HPP
#define HELPER_HPP
#include "clear_terminal.cpp"
#include "new_lines.cpp"
#include "formatter.cpp"

// Terminal cleaning functions.
extern void clear_terminal(void);
extern void new_lines(int number);

// Formatted text functions.
extern void option_formatter(std::string option, std::string type, int width);
extern void white_text(std::string text, int width);
extern void green_text(std::string text, int width);
extern void blue_text(std::string text, int width);
extern void yellow_text(std::string text, int width);


#endif
