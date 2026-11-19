/*
Day 51 - Question 101

QUESTION:
Take a sorted array and target. Print the first and last occurrence index.

SAMPLE TEST CASES:
Sample 1 input: [5,7,7,8,8,10], target=8
Sample 1 output: 3,4

Sample 2 input: [5,7,7,8,8,10], target=6
Sample 2 output: -1,-1

*/

#include <stdio.h>
int main(void) {
    int n, a[1000], x, first = - 1, last = - 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++) if (a[i] == x) {
        if (first < 0) first = i;
        last = i;
    }
    printf("%d,%d\n", first, last);
    return 0;
}
