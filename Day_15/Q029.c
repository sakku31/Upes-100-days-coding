/*
Day 15 - Question 29

QUESTION:
Write a program to calculate the factorial of a number.

SAMPLE TEST CASES:
Sample 1 input: 5
Sample 1 output: 120

Sample 2 input: 3
Sample 2 output: 6

*/

#include <stdio.h>
int main(void) {
    int n;
    unsigned long long f = 1;
    scanf("%d", &n);
    if (n < 0) {
        puts("Undefined");
        return 0;
    }
    for (int i = 2; i <= n; i++) f *= i;
    printf("%llu\n", f);
    return 0;
}
