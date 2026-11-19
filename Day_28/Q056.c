/*
Day 28 - Question 56

QUESTION:
Read and print elements of a one-dimensional array.

SAMPLE TEST CASES:
Sample 1 input: 3, 10 20 30
Sample 1 output: 10 20 30

Sample 2 input: 5, 1 2 3 4 5
Sample 2 output: 1 2 3 4 5

*/

#include <stdio.h>
int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) printf("%d%s", a[i], i == n - 1?"\n": " ");
    return 0;
}
