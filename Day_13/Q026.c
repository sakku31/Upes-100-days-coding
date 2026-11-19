/*
Day 13 - Question 26

QUESTION:
Write a program to print numbers from 1 to n.

SAMPLE TEST CASES:
Sample 1 input: 5
Sample 1 output: 1 2 3 4 5

Sample 2 input: 3
Sample 2 output: 1 2 3

*/

#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) printf("%s%d", i == 1?"": " ", i);
    putchar('\n');
    return 0;
}
