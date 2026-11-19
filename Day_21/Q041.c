/*
Day 21 - Question 41

QUESTION:
Write a program to swap the first and last digit of a number.

SAMPLE TEST CASES:
Sample 1 input: 1234
Sample 1 output: 4231

Sample 2 input: 1001
Sample 2 output: 1001

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char s[64];
    scanf("%63s", s);
    int n = (int) strlen(s);
    char t = s[0];
    s[0] = s[n - 1];
    s[n - 1] = t;
    puts(s);
    return 0;
}
