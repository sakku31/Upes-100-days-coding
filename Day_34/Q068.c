/*
Day 34 - Question 68

QUESTION:
Delete an element from an array.

SAMPLE TEST CASES:
Sample 1 input: 5, 1 2 3 4 5, pos 2
Sample 1 output: 1 2 4 5

*/

#include <stdio.h>
int main(void) {
    int n, a[1000], pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        puts("Invalid position");
        return 0;
    }
    for (int i = pos; i < n - 1; i++) a[i] = a[i + 1];
    for (int i = 0; i < n - 1; i++) printf("%d%s", a[i], i == n - 2?"\n": " ");
    return 0;
}
