/*
Day 24 - Question 47

QUESTION:
Write a program to print a right-angled triangle star pattern.

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: 5 rows of stars increasing from 1 to 5.

*/

#include <stdio.h>
int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        putchar('\n');
    }
    return 0;
}
