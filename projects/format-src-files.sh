#!/bin/bash
# Formatting source files with clang

# Get the list of source files
files=$(git ls-files '*.cpp' '*.hpp')

# Check if any files were found
if [ -z "$files" ]; then
  echo "Error: No source files (*.cpp, *.hpp) found to format."
  exit 1
fi

# Run clang-format and capture any errors
if echo "$files" | xargs clang-format -i; then
  echo "Done: Source files formatted successfully."
else
  echo "Error: An issue occurred while formatting files. Please check your clang installation and file permissions."
  exit 1
fi
