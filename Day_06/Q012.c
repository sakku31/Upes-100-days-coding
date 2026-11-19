/*
Day 6 - Question 12

QUESTION:
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

SAMPLE TEST CASES:
Sample 1 input: -5
Sample 1 output: Negative

Sample 2 input: 0
Sample 2 output: Zero

Sample 3 input: 10
Sample 3 output: Positive

*/

#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if (n > 0) puts("Positive");
    else if (n < 0) puts("Negative");
    else puts("Zero");
    return 0;
}
