/*
Day 30 - Question 60

QUESTION:
Count positive, negative, and zero elements in an array.

SAMPLE TEST CASES:
Sample 1 input: 5, -1 0 1 2 -2
Sample 1 output: Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>
int main(void) {
    int n, a, p = 0, neg = 0, z = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a > 0) p++;
        else if (a < 0) neg++;
        else z++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", p, neg, z);
    return 0;
}
