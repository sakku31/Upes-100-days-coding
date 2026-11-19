/*
Day 25 - Question 49

QUESTION:
Write a program to print a reverse numeric triangle pattern.

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: 5
45
345
2345
12345

*/

#include <stdio.h>
int main(void) {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) printf("%d", j);
        putchar('\n');
    }
    return 0;
}
