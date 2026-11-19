/*
Day 44 - Question 87

QUESTION:
Count spaces, digits, and special characters in a string.

SAMPLE TEST CASES:
Sample 1 input: a b1&2
Sample 1 output: Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1000];
    int sp = 0, d = 0, special = 0;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] && s[i] != '\n'; i++) {
        unsigned char c = s[i];
        if (c == ' ') sp++;
        else if (isdigit(c)) d++;
        else if (!isalpha(c)) special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", sp, d, special);
    return 0;
}
