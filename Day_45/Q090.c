/*
Day 45 - Question 90

QUESTION:
Toggle case of each character in a string.

SAMPLE TEST CASES:
Sample 1 input: Hello
Sample 1 output: hELLO

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    printf("%s", s);
    return 0;
}
