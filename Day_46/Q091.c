/*
Day 46 - Question 91

QUESTION:
Remove all vowels from a string.

SAMPLE TEST CASES:
Sample 1 input: education
Sample 1 output: dctn

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') putchar(c);
    }
    return 0;
}
