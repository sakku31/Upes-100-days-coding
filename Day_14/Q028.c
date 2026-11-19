/*
Day 14 - Question 28

QUESTION:
Write a program to print the product of even numbers from 1 to n.

SAMPLE TEST CASES:
Sample 1 input: 4
Sample 1 output: 8 (2 * 4)

Sample 2 input: 6
Sample 2 output: 48 (2 * 4 * 6)

*/

#include <stdio.h>
int main(void) {
    int n, first = 1;
    long long p = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) p *= i;
    printf("%lld (", p);
    if (n < 2) printf("1");
    else for (int i = 2; i <= n; i += 2) {
        if (!first) printf(" * ");
        printf("%d", i);
        first = 0;
    }
    puts(")");
    return 0;
}
