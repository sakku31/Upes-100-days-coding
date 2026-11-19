/*
Day 5 - Question 9

QUESTION:
Write a program to calculate simple and compound interest for given principal, rate, and time.

SAMPLE TEST CASES:
Sample 1 input: 1000 5 2
Sample 1 output: Simple Interest=100, Compound Interest=102.5

Sample 2 input: 5000 7 3
Sample 2 output: Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>
int main(void) {
    double p, r, t, si, ci;
    scanf("%lf%lf%lf", &p, &r, &t);
    si = p * r * t / 100.0;
    ci = p * pow(1 + r / 100.0, t) - p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", si, ci);
    return 0;
}
