/*
Day 52 - Question 102

QUESTION:
Find the index of the ceil of x in a sorted array.

SAMPLE TEST CASES:
Sample 1 input: [1, 2, 8, 10, 11, 12, 19], x=5
Sample 1 output: 2

Sample 2 input: [1, 2, 8, 10, 11, 12, 19], x=20
Sample 2 output: -1

*/

#include <stdio.h>
int main(void) {
    int n, a[1000], x, ans = - 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++) if (a[i] >= x) {
        ans = i;
        break;
    }
    printf("%d\n", ans);
    return 0;
}
