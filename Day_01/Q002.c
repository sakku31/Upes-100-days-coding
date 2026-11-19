/*
Day 1 - Question 2

QUESTION:
Write a program to input two numbers and display their sum, difference, product, and quotient.

SAMPLE TEST CASES:
Sample 1 input: 10 2
Sample 1 output: Sum=12, Diff=8, Product=20, Quotient=5

Sample 2 input: 7 3
Sample 2 output: Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
int main(void) {
    double a, b;
    if (scanf("%lf%lf", &a, &b) != 2) return 1;
    if (b == 0) {
        printf("Division by zero is undefined\n");
        return 0;
    }
    printf("Sum=%.0f, Diff=%.0f, Product=%.0f, Quotient=%.0f\n", a + b, a - b, a * b, a / b);
    return 0;
}
