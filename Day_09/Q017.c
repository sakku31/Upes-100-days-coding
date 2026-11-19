/*
Day 9 - Question 17

QUESTION:
Write a program to find the roots of a quadratic equation and categorize them.

SAMPLE TEST CASES:
Sample 1 input: 1 -3 2
Sample 1 output: Roots are real and different: 2, 1

Sample 2 input: 1 -2 1
Sample 2 output: Roots are real and same: 1

Sample 3 input: 1 2 5
Sample 3 output: Roots are complex

*/

#include <stdio.h>
#include <math.h>
int main(void) {
    double a, b, c, d, x1, x2;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a == 0) {
        puts("Not a quadratic equation");
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        x1 = ( - b + sqrt(d)) / (2 * a);
        x2 = ( - b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", x1, x2);
    }
    else if (d == 0) {
        printf("Roots are real and same: %.0f\n", - b / (2 * a));
    }
    else puts("Roots are complex");
    return 0;
}
