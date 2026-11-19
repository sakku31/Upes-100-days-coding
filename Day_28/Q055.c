/*
Day 28 - Question 55

QUESTION:
Write a program to print all the prime numbers from 1 to n.

SAMPLE TEST CASES:
Sample 1 input: 10
Sample 1 output: 2 3 5 7

Sample 2 input: 20
Sample 2 output: 2 3 5 7 11 13 17 19

*/

#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int x = 2; x <= n; x++) {
        int p = 1;
        for (int d = 2; d * d <= x; d++) if (x % d == 0) {
            p = 0;
            break;
        }
        if (p) printf("%d ", x);
    }
    putchar('\n');
    return 0;
}
