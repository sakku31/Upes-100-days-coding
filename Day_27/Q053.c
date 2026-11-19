/*
Day 27 - Question 53

QUESTION:
Write a program to print a diamond star pattern.

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: Diamond shape using stars.

*/

#include <stdio.h>
int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int s = 0; s < 5 - i; s++) putchar(' ');
        for (int j = 0; j < 2 * i - 1; j++) putchar('*');
        putchar('\n');
    }
    for (int i = 4; i >= 1; i--) {
        for (int s = 0; s < 5 - i; s++) putchar(' ');
        for (int j = 0; j < 2 * i - 1; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
