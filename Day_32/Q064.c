/*
Day 32 - Question 64

QUESTION:
Find the digit that occurs the most times in an integer number.

SAMPLE TEST CASES:
Sample 1 input: 112233
Sample 1 output: 1

Sample 2 input: 887799
Sample 2 output: 7

*/

#include <stdio.h>
int main(void) {
    char s[1000];
    int f[10] = {
        0
    }, best = 0;
    scanf("%999s", s);
    for (int i = 0; s[i]; i++) if (s[i] >= '0' && s[i] <= '9') f[s[i] - '0']++;
    for (int i = 1; i < 10; i++) if (f[i] > f[best]) best = i;
    printf("%d\n", best);
    return 0;
}
