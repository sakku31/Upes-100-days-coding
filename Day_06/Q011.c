/*
Day 6 - Question 11

QUESTION:
Write a program to input an integer and check whether it is even or odd using if–else.

SAMPLE TEST CASES:
Sample 1 input: 7
Sample 1 output: 7 is odd

Sample 2 input: 12
Sample 2 output: 12 is even

*/

#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d is %s\n", n, n % 2 == 0?"even": "odd");
    return 0;
}
