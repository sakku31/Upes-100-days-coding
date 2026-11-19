/*
Day 48 - Question 96

QUESTION:
Reverse each word in a sentence without changing the word order.

SAMPLE TEST CASES:
Sample 1 input: I love coding
Sample 1 output: I evol gnidoc

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char s[2000];
    fgets(s, sizeof s, stdin);
    int n = (int) strcspn(s, "\n"), i = 0;
    while (i < n) {
        while (i < n && s[i] == ' ') putchar(s[i++]);
        int start = i;
        while (i < n && s[i] != ' ') i++;
        for (int j = i - 1; j >= start; j--) putchar(s[j]);
    }
    putchar('\n');
    return 0;
}
