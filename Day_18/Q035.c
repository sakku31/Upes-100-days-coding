/*
Day 18 - Question 35

QUESTION:
Write a program to print all factors of a given number.

SAMPLE TEST CASES:
Sample 1 input: 6
Sample 1 output: 1 2 3 6

Sample 2 input: 10
Sample 2 output: 1 2 5 10

*/

#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) if (n % i == 0) printf("%d%s", i, i == n?"\n": " ");
    return 0;
}
