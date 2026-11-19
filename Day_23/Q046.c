/*
Day 23 - Question 46

QUESTION:
Write a program to print a 5x5 star pattern.

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: 5 rows of 5 stars each.

*/

#include <stdio.h>
int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("* ");
        putchar('\n');
    }
    return 0;
}
