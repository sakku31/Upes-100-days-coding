/*
Day 60 - Question 110

QUESTION:
Find the maximum element in each sliding window of size k.

SAMPLE TEST CASES:
Sample 1 input: [1, 2, 3, 1, 4, 5, 2, 3, 6], k=3
Sample 1 output: 3 3 4 5 5 5 6

Sample 2 input: [5, 1, 3, 4, 2], k=1
Sample 2 output: 5 1 3 4 2

*/

#include <stdio.h>
int main(void) {
    int n, k, a[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        puts("Invalid k");
        return 0;
    }
    for (int i = 0; i <= n - k; i++) {
        int m = a[i];
        for (int j = i + 1; j < i + k; j++) if (a[j] > m) m = a[j];
        printf("%d%s", m, i == n - k?"\n": " ");
    }
    return 0;
}
