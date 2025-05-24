#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/* Regular text ANSI color codes. */
#define RESET "\e[0m"
#define RED "\e[31m"
#define GREEN "\e[0;32m"
#define BLUE "\e[0;34m"
#define YELLOW "\e[0;33m"
#define WHITE "\e[0;37m"

void option_formatter(string option, string type, int width) {
  string formatted_option =
      string(BLUE) + "[" + RESET + option + BLUE + "]" + RESET;
  string formatted_option_with_type = formatted_option + " " + type;
  int option_length = formatted_option_with_type.length() + width;
  cout << setw(option_length) << formatted_option_with_type;
}

void option_error_formatter(string error, int width) {
  string formatted_error = RED + error + RESET;
  int error_length = formatted_error.length() + width;
  cout << setw(error_length) << formatted_error;
}

void white_text(string text, int width) {
  string formatted_text = WHITE + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;
  cout << setw(total_formatted_text_length) << formatted_text;
}

void green_text(string text, int width) {
  string formatted_text = GREEN + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;
  cout << setw(total_formatted_text_length) << formatted_text;
}

void blue_text(string text, int width) {
  string formatted_text = BLUE + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;
  cout << setw(total_formatted_text_length) << formatted_text;
}

void yellow_text(string text, int width) {
  string formatted_text = YELLOW + text + RESET;
  int formatted_text_length = formatted_text.length();
  int total_formatted_text_length = formatted_text_length + width;
  cout << setw(total_formatted_text_length) << formatted_text;
}
