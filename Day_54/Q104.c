/*
Day 54 - Question 104

QUESTION:
Find pivot integer x for sum 1 to x = x to n.

SAMPLE TEST CASES:
Sample 1 input: n=8
Sample 1 output: 6

Sample 2 input: n=4
Sample 2 output: -1

*/

#include <stdio.h>
int main(void) {
    long long n;
    scanf("%lld", &n);
    long long lo = 1, hi = n, ans = - 1;
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        long long left = mid * (mid + 1) / 2;
        long long right = (mid + n) * (n - mid + 1) / 2;
        if (left == right) {
            ans = mid;
            break;
        }
        if (left < right) lo = mid + 1;
        else hi = mid - 1;
    }
    printf("%lld\n", ans);
    return 0;
}
