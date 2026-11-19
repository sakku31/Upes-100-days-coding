/*
Day 40 - Question 80

QUESTION:
Multiply two matrices.

SAMPLE TEST CASES:
Sample 1 input: 2x3 and 3x2 matrices
Sample 1 output: 58 64, 139 154

*/

#include <stdio.h>
int main(void) {
    int r1, c1, r2, c2, a[50][50], b[50][50], z[50][50] = {
        0
    };
    scanf("%d%d", &r1, &c1);
    for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    scanf("%d%d", &r2, &c2);
    for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    if (c1 != r2) {
        puts("Incompatible dimensions");
        return 0;
    }
    for (int i = 0; i < r1; i++) for (int j = 0; j < c2; j++) for (int k = 0; k < c1; k++) z[i][j] += a[i][k] * b[k][j];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) printf("%d%s", z[i][j], j == c2 - 1?"": " ");
        putchar('\n');
    }
    return 0;
}
