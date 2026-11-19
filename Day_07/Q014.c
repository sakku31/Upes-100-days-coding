/*
Day 7 - Question 14

QUESTION:
Write a program to input a character and check whether it is a vowel or consonant using if–else.

SAMPLE TEST CASES:
Sample 1 input: a
Sample 1 output: Vowel

Sample 2 input: b
Sample 2 output: Consonant

*/

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char c;
    scanf(" %c", &c);
    c = (char) tolower((unsigned char) c);
    puts(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'?"Vowel": "Consonant");
    return 0;
}
