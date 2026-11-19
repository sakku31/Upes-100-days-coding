/*
Day 23 - Question 45

QUESTION:
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

SAMPLE TEST CASES:
Sample 1 input: 3
Sample 1 output: Approximate sum: 1.56

Sample 2 input: 5
Sample 2 output: Approximate sum: 2.22

*/

#include <stdio.h>
int main(void) {
    int n;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) sum += (2.0 * i) / (4.0 * i - 1);
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
