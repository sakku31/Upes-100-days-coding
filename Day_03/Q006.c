/*
Day 3 - Question 6

QUESTION:
Write a program to swap two numbers using a third variable.

SAMPLE TEST CASES:
Sample 1 input: 3 5
Sample 1 output: After swap: 5 3

Sample 2 input: -1 1
Sample 2 output: After swap: 1 -1

*/

#include <stdio.h>
int main(void) {
    int a, b, t;
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("After swap: %d %d\n", a, b);
    return 0;
}
