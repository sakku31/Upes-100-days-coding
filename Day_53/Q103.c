/*
Day 53 - Question 103

QUESTION:
Calculate the pivot index where left sum equals right sum.

SAMPLE TEST CASES:
Sample 1 input: [1,7,3,6,5,6]
Sample 1 output: 3

Sample 2 input: [1,2,3]
Sample 2 output: -1

*/

#include <stdio.h>
int main(void) {
    int n, a[1000];
    long long total = 0, left = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }
    for (int i = 0; i < n; i++) {
        if (left == total - left - a[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += a[i];
    }
    puts("-1");
    return 0;
}
