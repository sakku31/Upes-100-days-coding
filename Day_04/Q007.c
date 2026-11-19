/*
Day 4 - Question 7

QUESTION:
Write a program to swap two numbers without using a third variable.

SAMPLE TEST CASES:
Sample 1 input: 10 20
Sample 1 output: After swap: 20 10

Sample 2 input: 7 14
Sample 2 output: After swap: 14 7

*/

#include <stdio.h>
int main(void) {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("After swap: %lld %lld\n", a, b);
    return 0;
}
