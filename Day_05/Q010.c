/*
Day 5 - Question 10

QUESTION:
Write a program to input time in seconds and convert it to hours:minutes:seconds format.

SAMPLE TEST CASES:
Sample 1 input: 3661
Sample 1 output: 1:1:1

Sample 2 input: 7322
Sample 2 output: 2:2:2

*/

#include <stdio.h>
int main(void) {
    int s;
    scanf("%d", &s);
    printf("%d:%d:%d\n", s / 3600, (s % 3600) / 60, s % 60);
    return 0;
}
