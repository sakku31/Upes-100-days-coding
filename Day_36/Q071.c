/*
Day 36 - Question 71

QUESTION:
Read and print a matrix.

SAMPLE TEST CASES:
Sample 1 input: 2 2, 1 2, 3 4
Sample 1 output: 1 2, 3 4

*/

#include <stdio.h>
int main(void) {
    int r, c, a[50][50];
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d%s", a[i][j], j == c - 1?"": " ");
        putchar('\n');
    }
    return 0;
}
