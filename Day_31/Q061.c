/*
Day 31 - Question 61

QUESTION:
Search for an element in an array using linear search.

SAMPLE TEST CASES:
Sample 1 input: 5, 1 2 3 4 5, 3
Sample 1 output: Found at index 2

Sample 2 input: 4, 10 20 30 40, 25
Sample 2 output: -1

*/

#include <stdio.h>
int main(void) {
    int n, a[1000], x, found = - 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++) if (a[i] == x) {
        found = i;
        break;
    }
    if (found < 0) puts("-1");
    else printf("Found at index %d\n", found);
    return 0;
}
