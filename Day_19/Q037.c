/*
Day 19 - Question 37

QUESTION:
Write a program to find the LCM of two numbers.

SAMPLE TEST CASES:
Sample 1 input: 4 5
Sample 1 output: 20

Sample 2 input: 7 3
Sample 2 output: 21

*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a, b, x, y;
    scanf("%d%d", &a, &b);
    x = abs(a);
    y = abs(b);
    int p = x, q = y;
    while (q) {
        int t = p % q;
        p = q;
        q = t;
    }
    printf("%d\n", p?x / p * y: 0);
    return 0;
}
