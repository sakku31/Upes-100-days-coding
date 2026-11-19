/*
Day 57 - Question 107

QUESTION:
Find the previous greater element for each element using brute force.

SAMPLE TEST CASES:
Sample 1 input: [1, 3, 2, 4]
Sample 1 output: -1, -1, 3, -1

Sample 2 input: [6, 8, 0, 1, 3]
Sample 2 output: -1, -1, 8, 8, 8

*/

#include <stdio.h>
int main(void) {
    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int ans = - 1;
        for (int j = i - 1; j >= 0; j--) if (a[j] > a[i]) {
            ans = a[j];
            break;
        }
        printf("%d%s", ans, i == n - 1?"\n": " ");
    }
    return 0;
}
