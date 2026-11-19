/*
Day 44 - Question 88

QUESTION:
Replace spaces with hyphens in a string.

SAMPLE TEST CASES:
Sample 1 input: hello world
Sample 1 output: hello-world

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++) if (s[i] == ' ') s[i] = '-';
    printf("%s", s);
    return 0;
}
