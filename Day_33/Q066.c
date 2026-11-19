/*
Day 33 - Question 66

QUESTION:
Insert an element in a sorted array at the appropriate position.

SAMPLE TEST CASES:
Sample 1 input: 5, 1 2 4 5 6, 3
Sample 1 output: 1 2 3 4 5 6

*/

#include <stdio.h>
int main(void) {
    int n, a[1001], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    int i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    for (int j = 0; j <= n; j++) printf("%d%s", a[j], j == n?"\n": " ");
    return 0;
}
