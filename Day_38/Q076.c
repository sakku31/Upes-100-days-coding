/*
Day 38 - Question 76

QUESTION:
Check if a matrix is symmetric.

SAMPLE TEST CASES:
Sample 1 input: 2 2, 1 2, 2 1
Sample 1 output: True

Sample 2 input: 2 2, 1 0, 2 1
Sample 2 output: False

*/

#include <stdio.h>
int main(void) {
    int n, a[50][50], ok = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (a[i][j] != a[j][i]) ok = 0;
    puts(ok?"True": "False");
    return 0;
}
