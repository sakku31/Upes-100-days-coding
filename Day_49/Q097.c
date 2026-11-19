/*
Day 49 - Question 97

QUESTION:
Print the initials of a name.

SAMPLE TEST CASES:
Sample 1 input: John Doe
Sample 1 output: J.D.

*/

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    int start = 1;
    for (int i = 0; s[i] && s[i] != '\n'; i++) {
        if (start && isalpha((unsigned char) s[i])) {
            printf("%c.", toupper((unsigned char) s[i]));
            start = 0;
        }
        if (s[i] == ' ') start = 1;
    }
    putchar('\n');
    return 0;
}
