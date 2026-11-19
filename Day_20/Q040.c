/*
Day 20 - Question 40

QUESTION:
Write a program to find the 1’s complement of a binary number and print it.

SAMPLE TEST CASES:
Sample 1 input: 1010
Sample 1 output: 0101

Sample 2 input: 1111
Sample 2 output: 0000

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char s[256];
    scanf("%255s", s);
    for (int i = 0; s[i]; i++) s[i] = (s[i] == '0')?'1': (s[i] == '1'?'0': s[i]);
    puts(s);
    return 0;
}
