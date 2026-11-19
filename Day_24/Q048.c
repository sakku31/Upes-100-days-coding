/*
Day 24 - Question 48

QUESTION:
Write a program to print a numeric right-angled triangle pattern.

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: 1
12
123
1234
12345

*/

#include <stdio.h>
int main(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf("%d", j);
        putchar('\n');
    }
    return 0;
}
