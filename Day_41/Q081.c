/*
Day 41 - Question 81

QUESTION:
Count characters in a string without using built-in length functions.

SAMPLE TEST CASES:
Sample 1 input: Hello
Sample 1 output: 5

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    int n = 0;
    fgets(s, sizeof s, stdin);
    while (s[n] && s[n] != '\n') n++;
    printf("%d\n", n);
    return 0;
}
