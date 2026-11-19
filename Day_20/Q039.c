/*
Day 20 - Question 39

QUESTION:
Write a program to find the product of odd digits of a number.

SAMPLE TEST CASES:
Sample 1 input: 12345
Sample 1 output: 15 (1*3*5)

Sample 2 input: 2468
Sample 2 output: 1 (Assume 1 if no odd digits)

*/

#include <stdio.h>
int main(void) {
    long long n;
    int digits[20], k = 0, p = 1;
    scanf("%lld", &n);
    if (n < 0) n = - n;
    do {
        int d = n % 10;
        digits[k++] = d;
        if (d % 2) p *= d;
        n /= 10;
    }
    while (n);
    if (p == 1) {
        int found = 0;
        for (int i = 0; i < k; i++) if (digits[i] % 2) found = 1;
        if (!found) {
            puts("1 (Assume 1 if no odd digits)");
            return 0;
        }
    }
    printf("%d (", p);
    int first = 1;
    for (int i = k - 1; i >= 0; i--) if (digits[i] % 2) {
        if (!first) printf("*");
        printf("%d", digits[i]);
        first = 0;
    }
    puts(")");
    return 0;
}
