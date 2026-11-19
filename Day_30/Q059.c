/*
Day 30 - Question 59

QUESTION:
Count even and odd numbers in an array.

SAMPLE TEST CASES:
Sample 1 input: 6, 1 2 3 4 5 6
Sample 1 output: Even=3, Odd=3

Sample 2 input: 4, 2 4 6 8
Sample 2 output: Even=4, Odd=0

*/

#include <stdio.h>
int main(void) {
    int n, a, e = 0, o = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a % 2 == 0) e++;
        else o++;
    }
    printf("Even=%d, Odd=%d\n", e, o);
    return 0;
}
