/*
Day 50 - Question 100

QUESTION:
Print all sub-strings of a string.

SAMPLE TEST CASES:
Sample 1 input: abc
Sample 1 output: a, ab, abc, b, bc, c

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    int n = (int) strcspn(s, "\n"), first = 1;
    for (int i = 0; i < n; i++) for (int j = i + 1; j <= n; j++) {
        if (!first) printf(", ");
        for (int k = i; k < j; k++) putchar(s[k]);
        first = 0;
    }
    putchar('\n');
    return 0;
}
