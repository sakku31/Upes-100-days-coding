/*
Day 29 - Question 57

QUESTION:
Find the sum of array elements.

SAMPLE TEST CASES:
Sample 1 input: 4, 2 4 6 8
Sample 1 output: 20

Sample 2 input: 3, 1 1 1
Sample 2 output: 3

*/

#include <stdio.h>
int main(void) {
    int n, a[1000];
    long long s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    printf("%lld\n", s);
    return 0;
}
