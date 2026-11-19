/*
Day 31 - Question 62

QUESTION:
Reverse an array without taking extra space.

SAMPLE TEST CASES:
Sample 1 input: 4, 1 2 3 4
Sample 1 output: 4 3 2 1

*/

#include <stdio.h>
int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n / 2; i++) {
        int t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    for (int i = 0; i < n; i++) printf("%d%s", a[i], i == n - 1?"\n": " ");
    return 0;
}
