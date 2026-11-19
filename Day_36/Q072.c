/*
Day 36 - Question 72

QUESTION:
Find the sum of all elements in a matrix.

SAMPLE TEST CASES:
Sample 1 input: 2 3, 1 2 3, 4 5 6
Sample 1 output: 21

*/

#include <stdio.h>
int main(void) {
    int r, c, x;
    long long s = 0;
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r * c; i++) {
        scanf("%d", &x);
        s += x;
    }
    printf("%lld\n", s);
    return 0;
}
