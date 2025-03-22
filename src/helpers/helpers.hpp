#ifndef HELPERS_HPP
#define HELPERS_HPP
#include "clear_terminal.cpp"
#include "new_line.cpp"
#include "text_formatter.cpp"

// Terminal cleaning functions.
void clear_terminal(void);
void new_line(void);

// Formatted text functions.
void blue_text(std::string text, int width);
void green_text(std::string text, int width);
void white_text(std::string text, int width);

#endif
