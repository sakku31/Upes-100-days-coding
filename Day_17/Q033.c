/*
Day 17 - Question 33

QUESTION:
Write a program to check if a number is an Armstrong number.

SAMPLE TEST CASES:
Sample 1 input: 153
Sample 1 output: Armstrong

Sample 2 input: 123
Sample 2 output: Not Armstrong

*/

#include <stdio.h>
#include <math.h>
int main(void) {
    int n, x, d = 0;
    long long sum = 0;
    scanf("%d", &n);
    x = n;
    int t = x;
    do {
        d++;
        t /= 10;
    }
    while (t);
    t = x;
    do {
        int z = t % 10;
        sum += (long long) pow(z, d);
        t /= 10;
    }
    while (t);
    puts(n >= 0 && sum == n?"Armstrong": "Not Armstrong");
    return 0;
}
