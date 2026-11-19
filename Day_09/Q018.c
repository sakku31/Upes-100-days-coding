/*
Day 9 - Question 18

QUESTION:
Write a program that accepts a percentage (0-100) and assigns a grade based on criteria (90-100: A, 80-89: B, 70-79: C, 60-69: D, <60: F).

SAMPLE TEST CASES:
Sample 1 input: 95
Sample 1 output: Grade A

Sample 2 input: 82
Sample 2 output: Grade B

Sample 3 input: 68
Sample 3 output: Grade D

Sample 4 input: 50
Sample 4 output: Grade F

*/

#include <stdio.h>
int main(void) {
    int p;
    scanf("%d", &p);
    if (p >= 90 && p <= 100) puts("Grade A");
    else if (p >= 80) puts("Grade B");
    else if (p >= 70) puts("Grade C");
    else if (p >= 60) puts("Grade D");
    else puts("Grade F");
    return 0;
}
