/*
Day 58 - Question 108

QUESTION:
Product of array except self.

SAMPLE TEST CASES:
Sample 1 input: [1,2,3,4]
Sample 1 output: [24,12,8,6]

Sample 2 input: [-1,1,0,-3,3]
Sample 2 output: [0,0,9,0,0]

*/

#include <stdio.h>
int main(void) {
    int n, a[1000];
    long long pre[1000], suf = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    long long p = 1;
    for (int i = 0; i < n; i++) {
        pre[i] = p;
        p *= a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        pre[i] *= suf;
        suf *= a[i];
    }
    putchar('[');
    for (int i = 0; i < n; i++) printf("%s%lld", i?",": "", pre[i]);
    puts("]");
    return 0;
}
