/*
Day 21 - Question 42

QUESTION:
Write a program to check if a number is a perfect number.

SAMPLE TEST CASES:
Sample 1 input: 6
Sample 1 output: Perfect number

Sample 2 input: 10
Sample 2 output: Not perfect number

*/

#include <stdio.h>
int main(void) {
    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) if (n % i == 0) s += i;
    puts(n > 0 && s == n?"Perfect number": "Not perfect number");
    return 0;
}
