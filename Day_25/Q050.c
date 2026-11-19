/*
Day 25 - Question 50

QUESTION:
Write a program to print an inverted right-angled star pattern.

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: 5 stars down to 1 star with indentation.

*/

#include <stdio.h>
int main(void) {
    for (int i = 5; i >= 1; i--) {
        for (int s = 0; s < 5 - i; s++) putchar(' ');
        for (int j = 0; j < i; j++) printf("* ");
        putchar('\n');
    }
    return 0;
}
