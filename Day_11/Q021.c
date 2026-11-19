/*
Day 11 - Question 21

QUESTION:
Write a program to display the month name and number of days using switch-case for a given month number.

SAMPLE TEST CASES:
Sample 1 input: 2
Sample 1 output: February, 28 days

Sample 2 input: 12
Sample 2 output: December, 31 days

*/

#include <stdio.h>
int main(void) {
    int m;
    scanf("%d", &m);
    switch (m) {
        case 1: puts("January, 31 days");
        break;
        case 2: puts("February, 28 days");
        break;
        case 3: puts("March, 31 days");
        break;
        case 4: puts("April, 30 days");
        break;
        case 5: puts("May, 31 days");
        break;
        case 6: puts("June, 30 days");
        break;
        case 7: puts("July, 31 days");
        break;
        case 8: puts("August, 31 days");
        break;
        case 9: puts("September, 30 days");
        break;
        case 10: puts("October, 31 days");
        break;
        case 11: puts("November, 30 days");
        break;
        case 12: puts("December, 31 days");
        break;
        default: puts("Invalid month");
    }
    return 0;
}
