build:
	g++ -Wall -Wextra -Wpedantic -Werror -g -o bin/main src/main.cpp

debug: build
	gdb ./bin/main

run: build
	./bin/main
