/*
Day 2 - Question 4

QUESTION:
Write a program to calculate the area and circumference of a circle given its radius.

SAMPLE TEST CASES:
Sample 1 input: 7
Sample 1 output: Area=153.94, Circumference=43.96

Sample 2 input: 3
Sample 2 output: Area=28.27, Circumference=18.85

*/

#include <stdio.h>
int main(void) {
    double r;
    scanf("%lf", &r);
    printf("Area=%.2f, Circumference=%.2f\n", 3.141592653589793 * r * r, 2 * 3.141592653589793 * r);
    return 0;
}
