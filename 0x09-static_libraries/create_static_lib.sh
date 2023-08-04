#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up the object files (optional, you can keep them if needed)
rm -f *.o

# Notify completion
echo "Static library liball.a has been created from all .c files in the current directory."
