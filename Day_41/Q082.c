/*
Day 41 - Question 82

QUESTION:
Print each character of a string on a new line.

SAMPLE TEST CASES:
Sample 1 input: Hi
Sample 1 output: H
i

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] && s[i] != '\n'; i++) printf("%c\n", s[i]);
    return 0;
}
