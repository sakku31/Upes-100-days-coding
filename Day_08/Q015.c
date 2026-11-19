/*
Day 8 - Question 15

QUESTION:
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

SAMPLE TEST CASES:
Sample 1 input: A
Sample 1 output: Uppercase alphabet

Sample 2 input: a
Sample 2 output: Lowercase alphabet

Sample 3 input: 3
Sample 3 output: Digit

Sample 4 input: #
Sample 4 output: Special character

*/

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    scanf(" %c", &c);
    if (isupper((unsigned char) c)) puts("Uppercase alphabet");
    else if (islower((unsigned char) c)) puts("Lowercase alphabet");
    else if (isdigit((unsigned char) c)) puts("Digit");
    else puts("Special character");
    return 0;
}
