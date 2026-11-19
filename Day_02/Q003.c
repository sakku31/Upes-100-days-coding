/*
Day 2 - Question 3

QUESTION:
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

SAMPLE TEST CASES:
Sample 1 input: 5 10
Sample 1 output: Area=50, Perimeter=30

Sample 2 input: 3 7
Sample 2 output: Area=21, Perimeter=20

*/

#include <stdio.h>
int main(void) {
    double l, b;
    scanf("%lf%lf", &l, &b);
    printf("Area=%.0f, Perimeter=%.0f\n", l * b, 2 * (l + b));
    return 0;
}
