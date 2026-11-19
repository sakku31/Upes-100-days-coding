/*
Day 49 - Question 98

QUESTION:
Print initials of a name with the surname displayed in full.

SAMPLE TEST CASES:
Sample 1 input: John David Doe
Sample 1 output: J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char s[1000], * w[100];
    int n = 0;
    fgets(s, sizeof s, stdin);
    char * p = strtok(s, " \t\n");
    while (p && n < 100) {
        w[n++] = p;
        p = strtok(NULL, " \t\n");
    }
    for (int i = 0; i < n - 1; i++) printf("%c.", toupper((unsigned char) w[i][0]));
    if (n) printf(" %s", w[n - 1]);
    putchar('\n');
    return 0;
}
