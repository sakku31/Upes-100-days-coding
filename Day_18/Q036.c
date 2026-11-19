/*
Day 18 - Question 36

QUESTION:
Write a program to find the HCF (GCD) of two numbers.

SAMPLE TEST CASES:
Sample 1 input: 12 18
Sample 1 output: 6

Sample 2 input: 7 9
Sample 2 output: 1

*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a, b, t;
    scanf("%d%d", &a, &b);
    a = abs(a);
    b = abs(b);
    while (b) {
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d\n", a);
    return 0;
}
