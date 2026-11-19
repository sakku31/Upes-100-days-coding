/*
Day 34 - Question 67

QUESTION:
Insert an element in an array at a given position.

SAMPLE TEST CASES:
Sample 1 input: 4, 10 20 30 40, pos 2, val 15
Sample 1 output: 10 20 15 30 40

*/

#include <stdio.h>
int main(void) {
    int n, a[1001], pos, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d%d", &pos, &x);
    if (pos < 0 || pos > n) {
        puts("Invalid position");
        return 0;
    }
    for (int i = n; i > pos; i--) a[i] = a[i - 1];
    a[pos] = x;
    for (int i = 0; i <= n; i++) printf("%d%s", a[i], i == n?"\n": " ");
    return 0;
}
