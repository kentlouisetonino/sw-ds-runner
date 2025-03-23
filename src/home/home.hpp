#ifndef HOME_HPP
#define HOME_HPP
#include "./show_home_description.cpp"
#include "./show_home_instruction.cpp"
#include "./show_home_options.cpp"
#include "./get_home_input.cpp"

extern int get_home_input(int width);
extern void show_home_description(int width);
extern void show_home_instruction(int width);
extern void show_home_options(int width);

#endif
