/*
Day 33 - Question 65

QUESTION:
Search in a sorted array using binary search.

SAMPLE TEST CASES:
Sample 1 input: 5, 1 3 5 7 9, 7
Sample 1 output: Found at index 3

Sample 2 input: 5, 1 3 5 7 9, 6
Sample 2 output: -1

*/

#include <stdio.h>
int main(void) {
    int n, a[1000], x, l = 0, r, mid, ans = - 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    r = n - 1;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (a[mid] == x) {
            ans = mid;
            break;
        }
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    if (ans < 0) puts("-1");
    else printf("Found at index %d\n", ans);
    return 0;
}
