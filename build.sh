#!/bin/zsh
#+ Command to compile c++ program
if [ $# -eq 0 ];
then
    echo "$0: Missing arguments"
    exit 1
elif [ $# -gt 2 ];
then
    echo "$0: Too many arguments: $@"
    exit 1
else
  echo "Compiling and running $1"
  echo "==========================="
fi
g++-14 -std=c++23 -o $1 $1.cpp
./$1
echo "==========================="
exit 0