/*
Day 16 - Question 32

QUESTION:
Write a program to check if a number is a palindrome.

SAMPLE TEST CASES:
Sample 1 input: 121
Sample 1 output: Palindrome

Sample 2 input: 123
Sample 2 output: Not palindrome

*/

#include <stdio.h>
int main(void) {
    long long n, x, r = 0;
    scanf("%lld", &n);
    x = n;
    while (x > 0) {
        r = r * 10 + x % 10;
        x /= 10;
    }
    puts(n >= 0 && n == r?"Palindrome": "Not palindrome");
    return 0;
}
