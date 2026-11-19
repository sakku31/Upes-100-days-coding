/*
Day 37 - Question 73

QUESTION:
Find the sum of each row of a matrix and store it in an array.

SAMPLE TEST CASES:
Sample 1 input: 2 3, 1 2 3, 4 5 6
Sample 1 output: 6 15

*/

#include <stdio.h>
int main(void) {
    int r, c, a[50][50];
    scanf("%d%d", &r, &c);
    for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++) {
        int s = 0;
        for (int j = 0; j < c; j++) s += a[i][j];
        printf("%d%s", s, i == r - 1?"\n": " ");
    }
    return 0;
}
