#!/bin/sh
# Usage: ./compile_one.sh Day_01/Q001.c
set -e
gcc "$1" -o program -lm
./program
