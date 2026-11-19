/*
Day 7 - Question 13

QUESTION:
Write a program to input a year and check whether it is a leap year or not using conditional statements.

SAMPLE TEST CASES:
Sample 1 input: 2020
Sample 1 output: Leap year

Sample 2 input: 1900
Sample 2 output: Not a leap year

Sample 3 input: 2000
Sample 3 output: Leap year

*/

#include <stdio.h>
int main(void) {
    int y;
    scanf("%d", &y);
    puts((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))?"Leap year": "Not a leap year");
    return 0;
}
