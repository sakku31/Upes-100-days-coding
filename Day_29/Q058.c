/*
Day 29 - Question 58

QUESTION:
Find the maximum and minimum element in an array.

SAMPLE TEST CASES:
Sample 1 input: 5, 2 9 1 4 7
Sample 1 output: Max=9, Min=1

Sample 2 input: 3, 10 10 10
Sample 2 output: Max=10, Min=10

*/

#include <stdio.h>
int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int mx = a[0], mn = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }
    printf("Max=%d, Min=%d\n", mx, mn);
    return 0;
}
