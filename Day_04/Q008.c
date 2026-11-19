/*
Day 4 - Question 8

QUESTION:
Write a program to find and display the sum of the first n natural numbers.

SAMPLE TEST CASES:
Sample 1 input: 5
Sample 1 output: Sum=15

Sample 2 input: 10
Sample 2 output: Sum=55

*/

#include <stdio.h>
int main(void) {
    long long n;
    scanf("%lld", &n);
    printf("Sum=%lld\n", n * (n + 1) / 2);
    return 0;
}
