/*
Day 35 - Question 69

QUESTION:
Find the second largest element in an array.

SAMPLE TEST CASES:
Sample 1 input: 5, 10 20 30 40 50
Sample 1 output: 40

*/

#include <stdio.h>
#include <limits.h>
int main(void) {
    int n, a[1000], largest = INT_MIN, second = INT_MIN;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > second) second = a[i];
    }
    if (second == INT_MIN) puts("No second distinct largest element");
    else printf("%d\n", second);
    return 0;
}
