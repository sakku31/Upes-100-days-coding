/*
Day 10 - Question 19

QUESTION:
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

SAMPLE TEST CASES:
Sample 1 input: 3 3 3
Sample 1 output: Equilateral

Sample 2 input: 3 3 4
Sample 2 output: Isosceles

Sample 3 input: 2 3 4
Sample 3 output: Scalene

*/

#include <stdio.h>
int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a) puts("Invalid triangle");
    else if (a == b && b == c) puts("Equilateral");
    else if (a == b || b == c || a == c) puts("Isosceles");
    else puts("Scalene");
    return 0;
}
