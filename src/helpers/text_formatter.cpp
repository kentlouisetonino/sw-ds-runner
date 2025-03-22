#include <iostream>
#include <string>
#include <iomanip>

// Regular text ANSI color codes.
#define BLUE "\e[0;34m"
#define GREEN "\e[0;32m"
#define WHITE "\e[0;37m"
#define RESET "\e[0m"

void blue_text(std::string text, int width) {
  std::string formatted_text = BLUE + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;

  std::cout << std::setw(total_formatted_text_length) << formatted_text;
}

void green_text(std::string text, int width) {
  std::string formatted_text = GREEN + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;

  std::cout << std::setw(total_formatted_text_length) << formatted_text;
}

void white_text(std::string text, int width) {
  std::string formatted_text = WHITE  + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;

  std::cout << std::setw(total_formatted_text_length) << formatted_text;
}
