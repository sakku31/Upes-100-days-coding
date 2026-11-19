/*
Day 39 - Question 78

QUESTION:
Find the sum of main diagonal elements for a square matrix.

SAMPLE TEST CASES:
Sample 1 input: 3 3, 1 2 3, 4 5 6, 7 8 9
Sample 1 output: 15

*/

#include <stdio.h>
int main(void) {
    int n, a[50][50], s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) s += a[i][i];
    printf("%d\n", s);
    return 0;
}
