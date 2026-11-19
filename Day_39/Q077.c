/*
Day 39 - Question 77

QUESTION:
Check if the elements on the diagonal of a matrix are distinct.

SAMPLE TEST CASES:
Sample 1 input: 3x3 with 1, 5, 1 on diagonal
Sample 1 output: False

*/

#include <stdio.h>
int main(void) {
    int n, a[50][50], seen[1000] = {
        0
    }, ok = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++) {
        int x = a[i][i];
        if (x >= 0 && x < 1000) {
            if (seen[x]) ok = 0;
            seen[x] = 1;
        }
        else for (int j = 0; j < i; j++) if (a[j][j] == x) ok = 0;
    }
    puts(ok?"True": "False");
    return 0;
}
