/*
Day 43 - Question 85

QUESTION:
Reverse a string.

SAMPLE TEST CASES:
Sample 1 input: abcd
Sample 1 output: dcba

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    int n = (int) strcspn(s, "\n");
    for (int i = n - 1; i >= 0; i--) putchar(s[i]);
    putchar('\n');
    return 0;
}
