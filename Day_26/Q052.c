/*
Day 26 - Question 52

QUESTION:
Write a program to print an irregular star pattern (1, 3, 5, 3, 1 stars).

SAMPLE TEST CASES:
Sample 1 input: (no input)
Sample 1 output: Pattern with stars spaced as shown.

*/

#include <stdio.h>
int main(void) {
    int a[] = {
        1, 3, 5, 3, 1
    };
    for (int i = 0; i < 5; i++) {
        int spaces = (i < 3?2 - i: i - 2);
        for (int s = 0; s < spaces; s++) putchar(' ');
        for (int j = 0; j < a[i]; j++) printf("* ");
        putchar('\n');
    }
    return 0;
}
