/*
Day 46 - Question 92

QUESTION:
Find the first repeating lowercase alphabet in a string.

SAMPLE TEST CASES:
Sample 1 input: stress
Sample 1 output: s

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    int seen[26] = {
        0
    };
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i] && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int k = s[i] - 'a';
            if (seen[k]) {
                printf("%c\n", s[i]);
                return 0;
            }
            seen[k] = 1;
        }
    }
    puts("No repeating character");
    return 0;
}
