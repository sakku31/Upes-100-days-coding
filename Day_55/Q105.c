/*
Day 55 - Question 105

QUESTION:
Find the majority element (> n/2 occurrences).

SAMPLE TEST CASES:
Sample 1 input: [3,2,3]
Sample 1 output: 3

Sample 2 input: [2,2,1,1,1,2,2,3]
Sample 2 output: -1

*/

#include <stdio.h>
int main(void) {
    int n, a[1000], candidate = 0, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (count == 0) candidate = a[i], count = 1;
        else if (a[i] == candidate) count++;
        else count--;
    }
    count = 0;
    for (int i = 0; i < n; i++) if (a[i] == candidate) count++;
    if (count > n / 2) printf("%d\n", candidate);
    else puts("-1");
    return 0;
}
