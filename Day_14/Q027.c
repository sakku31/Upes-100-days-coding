/*
Day 14 - Question 27

QUESTION:
Write a program to print the sum of the first n odd numbers.

SAMPLE TEST CASES:
Sample 1 input: 3
Sample 1 output: 9

Sample 2 input: 5
Sample 2 output: 25

*/

#include <stdio.h>
int main(void) {
    long long n, s;
    scanf("%lld", &n);
    s = n * n;
    printf("%lld\n", s);
    return 0;
}
