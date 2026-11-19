/*
Day 37 - Question 74

QUESTION:
Find the transpose of a matrix.

SAMPLE TEST CASES:
Sample 1 input: 2 3, 1 2 3, 4 5 6
Sample 1 output: 1 4, 2 5, 3 6

*/

#include <stdio.h>
int main(void) {
    int r, c, a[50][50];
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) printf("%d%s", a[i][j], i == r - 1?"": " ");
        putchar('\n');
    }
    return 0;
}
