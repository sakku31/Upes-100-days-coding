/*
Day 3 - Question 5

QUESTION:
Write a program to convert temperature from Celsius to Fahrenheit.

SAMPLE TEST CASES:
Sample 1 input: 0
Sample 1 output: Fahrenheit=32

Sample 2 input: 100
Sample 2 output: Fahrenheit=212

*/

#include <stdio.h>
int main(void) {
    double c;
    scanf("%lf", &c);
    printf("Fahrenheit=%.0f\n", c * 9.0 / 5.0 + 32);
    return 0;
}
