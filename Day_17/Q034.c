/*
Day 17 - Question 34

QUESTION:
Write a program to check if a number is prime.

SAMPLE TEST CASES:
Sample 1 input: 7
Sample 1 output: Prime

Sample 2 input: 10
Sample 2 output: Not prime

*/

#include <stdio.h>
int main(void) {
    int n, prime = 1;
    scanf("%d", &n);
    if (n < 2) prime = 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) {
        prime = 0;
        break;
    }
    puts(prime?"Prime": "Not prime");
    return 0;
}
