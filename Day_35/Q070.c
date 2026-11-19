/*
Day 35 - Question 70

QUESTION:
Rotate an array to the right by k positions.

SAMPLE TEST CASES:
Sample 1 input: 5, 1 2 3 4 5, 2
Sample 1 output: 4 5 1 2 3

*/

#include <stdio.h>
int main(void) {
    int n, a[1000], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    if (n <= 0) return 0;
    k = ((k % n) + n) % n;
    for (int i = n - k; i < n; i++) printf("%d ", a[i]);
    for (int i = 0; i < n - k; i++) printf("%d%s", a[i], i == n - k - 1?"\n": " ");
    return 0;
}
