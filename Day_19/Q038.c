/*
Day 19 - Question 38

QUESTION:
Write a program to find the sum of digits of a number.

SAMPLE TEST CASES:
Sample 1 input: 123
Sample 1 output: 6

Sample 2 input: 999
Sample 2 output: 27

*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n, s = 0;
    scanf("%lld", &n);
    n = llabs(n);
    while (n) {
        s += n % 10;
        n /= 10;
    }
    printf("%lld\n", s);
    return 0;
}
