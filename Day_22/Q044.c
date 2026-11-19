/*
Day 22 - Question 44

QUESTION:
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

SAMPLE TEST CASES:
Sample 1 input: 3
Sample 1 output: Approximate sum: 3.3

Sample 2 input: 5
Sample 2 output: Approximate sum: 4.4

*/

#include <stdio.h>
int main(void) {
    int n;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) sum += 1.0;
        else sum += (2.0 * i - 1) / (2.0 * i - 2);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
