/*
Day 27 - Question 54

QUESTION:
Write a program to print a pyramid star pattern.

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: Pyramid shape using stars.

*/

#include <stdio.h>
int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int s = 0; s < 5 - i; s++) putchar(' ');
        for (int j = 0; j < 2 * i - 1; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
