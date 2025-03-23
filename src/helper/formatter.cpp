#include <iomanip>
#include <iostream>
#include <string>

// Regular text ANSI color codes.
#define RESET "\e[0m"
#define GREEN "\e[0;32m"
#define BLUE "\e[0;34m"
#define YELLOW "\e[0;33m"
#define WHITE "\e[0;37m"

void option_formatter(std::string option, std::string type, int width) {
  // Format the option number.
  std::string formatted_option =
      std::string(BLUE) + "[" + RESET + option + BLUE + "]" + RESET;

  // Concatenate with the option type.
  std::string formatted_option_with_type = formatted_option + " " + type;

  // Total option length + the provided custom width.
  int option_length = formatted_option_with_type.length() + width;

  // Display with custom width.
  std::cout << std::setw(option_length) << formatted_option_with_type;
}

void white_text(std::string text, int width) {
  std::string formatted_text = WHITE + text + RESET;
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

void blue_text(std::string text, int width) {
  std::string formatted_text = BLUE + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;
  std::cout << std::setw(total_formatted_text_length) << formatted_text;
}

void yellow_text(std::string text, int width) {
  std::string formatted_text = YELLOW + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;
  std::cout << std::setw(total_formatted_text_length) << formatted_text;
}
