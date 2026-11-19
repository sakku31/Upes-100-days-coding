/*
Day 38 - Question 75

QUESTION:
Add two matrices.

SAMPLE TEST CASES:
Sample 1 input: Two 2x2 matrices [1 2, 3 4] and [5 6, 7 8]
Sample 1 output: 6 8, 10 12

*/

#include <stdio.h>
int main(void) {
    int r, c, a[50][50], b[50][50];
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d%s", a[i][j] + b[i][j], j == c - 1?"": " ");
        putchar('\n');
    }
    return 0;
}
