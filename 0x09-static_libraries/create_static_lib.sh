#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create the static library liball.a from the compiled .o files
ar -rcs liball.a *.o

# Clean up the temporary .o files
rm -f *.o
