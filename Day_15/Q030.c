/*
Day 15 - Question 30

QUESTION:
Write a program to reverse a given number.

SAMPLE TEST CASES:
Sample 1 input: 1234
Sample 1 output: 4321

Sample 2 input: 100
Sample 2 output: 1

*/

#include <stdio.h>
int main(void) {
    long long n, r = 0;
    scanf("%lld", &n);
    long long x = n < 0? - n: n;
    while (x) {
        r = r * 10 + x % 10;
        x /= 10;
    }
    if (n < 0) r = - r;
    printf("%lld\n", r);
    return 0;
}
