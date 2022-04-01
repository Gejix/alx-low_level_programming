#!/bin/bash
gcc Wall -pedantic -Werror -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
