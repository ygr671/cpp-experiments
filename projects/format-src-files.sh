#/bin/bash
# Formatting source files with clang

# TODO:
# - Write it properly and return user understandeable "done" or "error : {error}"

git ls-files '*.cpp' '*.hpp' | xargs clang-format -i

