#!/bin/bash
gcc -std=c11 -Wall -Wextra -Werror -pedantic-errors -c *.c
ar rcs liball.a *.o
