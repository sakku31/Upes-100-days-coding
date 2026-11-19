/*
Day 22 - Question 43

QUESTION:
Write a program to check if a number is a strong number.

SAMPLE TEST CASES:
Sample 1 input: 145
Sample 1 output: Strong number

Sample 2 input: 123
Sample 2 output: Not strong number

*/

#include <stdio.h>
int fact(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}
int main(void) {
    int n, x, s = 0;
    scanf("%d", &n);
    x = n;
    do {
        s += fact(x % 10);
        x /= 10;
    }
    while (x);
    puts(n >= 0 && s == n?"Strong number": "Not strong number");
    return 0;
}
