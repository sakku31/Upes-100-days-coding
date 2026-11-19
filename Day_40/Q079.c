/*
Day 40 - Question 79

QUESTION:
Perform diagonal traversal of a matrix.

SAMPLE TEST CASES:
Sample 1 input: 3 3, 1 2 3, 4 5 6, 7 8 9
Sample 1 output: 1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
int main(void) {
    int r, c, a[50][50];
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int d = 0; d < r + c - 1; d++) {
        int start = d < c?0: d - c + 1, end = d < r?d: r - 1;
        if (d % 2 == 0) {
            for (int i = end; i >= start; i--) {
                int j = d - i;
                printf("%d ", a[i][j]);
            }
        }
        else {
            for (int i = start; i <= end; i++) {
                int j = d - i;
                printf("%d ", a[i][j]);
            }
        }
    }
    putchar('\n');
    return 0;
}
