/*
Day 8 - Question 16

QUESTION:
Write a program to input three numbers and find the largest among them using if–else.

SAMPLE TEST CASES:
Sample 1 input: 3 7 5
Sample 1 output: Largest is 7

Sample 2 input: -1 -5 0
Sample 2 output: Largest is 0

*/

#include <stdio.h>
int main(void) {
    int a, b, c, m;
    scanf("%d%d%d", &a, &b, &c);
    m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    printf("Largest is %d\n", m);
    return 0;
}
