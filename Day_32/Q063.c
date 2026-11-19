/*
Day 32 - Question 63

QUESTION:
Merge two arrays.

SAMPLE TEST CASES:
Sample 1 input: 3, 1 2 3 and 2, 4 5
Sample 1 output: 1 2 3 4 5

*/

#include <stdio.h>
int main(void) {
    int n, m, a[1000], b[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    for (int i = 0; i < m; i++) printf("%d%s", b[i], i == m - 1?"\n": " ");
    return 0;
}
