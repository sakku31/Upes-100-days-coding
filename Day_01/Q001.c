/*
Day 1 - Question 1

QUESTION:
Write a program to input two numbers and display their sum.

SAMPLE TEST CASES:
Sample 1 input: 3 4
Sample 1 output: Sum = 7

Sample 2 input: -1 20
Sample 2 output: Sum = 19

*/

#include <stdio.h>
int main(void) {
    double a, b;
    if (scanf("%lf%lf", &a, &b) != 2) return 1;
    printf("Sum = %.0f\n", a + b);
    return 0;
}
