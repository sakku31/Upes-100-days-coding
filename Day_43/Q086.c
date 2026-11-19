/*
Day 43 - Question 86

QUESTION:
Check if a string is a palindrome.

SAMPLE TEST CASES:
Sample 1 input: madam
Sample 1 output: Palindrome

Sample 2 input: hello
Sample 2 output: Not palindrome

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1000];
    fgets(s, sizeof s, stdin);
    int n = (int) strcspn(s, "\n"), ok = 1;
    for (int i = 0; i < n / 2; i++) if (s[i] != s[n - 1 - i]) ok = 0;
    puts(ok?"Palindrome": "Not palindrome");
    return 0;
}
