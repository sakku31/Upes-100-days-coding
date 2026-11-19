/*
Day 42 - Question 84

QUESTION:
Convert a lowercase string to uppercase without using built-in functions.

SAMPLE TEST CASES:
Sample 1 input: hello
Sample 1 output: HELLO

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++) if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    printf("%s", s);
    return 0;
}
