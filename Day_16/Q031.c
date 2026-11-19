/*
Day 16 - Question 31

QUESTION:
Write a program to take a number as input and print its equivalent binary representation.

SAMPLE TEST CASES:
Sample 1 input: 10
Sample 1 output: 1010

Sample 2 input: 7
Sample 2 output: 111

*/

#include <stdio.h>
int main(void) {
    unsigned int n;
    int bits[64], i = 0;
    scanf("%u", &n);
    if (n == 0) {
        puts("0");
        return 0;
    }
    while (n) {
        bits[i++] = n % 2;
        n /= 2;
    }
    while (i--) printf("%d", bits[i]);
    putchar('\n');
    return 0;
}
