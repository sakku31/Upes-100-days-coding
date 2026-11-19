/*
Day 59 - Question 109

QUESTION:
Maximum sum of subarray of size k.

SAMPLE TEST CASES:
Sample 1 input: [100, 200, 300, 400], k=2
Sample 1 output: 700

Sample 2 input: [1, 4, 2, 10, 23, 3, 1, 0, 20], k=4
Sample 2 output: 39

*/

#include <stdio.h>
int main(void) {
    int n, k, a[100000];
    long long sum = 0, best;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    if (k <= 0 || k > n) {
        puts("Invalid k");
        return 0;
    }
    for (int i = 0; i < k; i++) sum += a[i];
    best = sum;
    for (int i = k; i < n; i++) {
        sum += a[i] - a[i - k];
        if (sum > best) best = sum;
    }
    printf("%lld\n", best);
    return 0;
}
