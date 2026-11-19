/*
Day 10 - Question 20

QUESTION:
Write a program to display the day of the week based on a number (1–7) using switch-case.

SAMPLE TEST CASES:
Sample 1 input: 1
Sample 1 output: Monday

Sample 2 input: 5
Sample 2 output: Friday

*/

#include <stdio.h>
int main(void) {
    int d;
    scanf("%d", &d);
    switch (d) {
        case 1: puts("Monday");
        break;
        case 2: puts("Tuesday");
        break;
        case 3: puts("Wednesday");
        break;
        case 4: puts("Thursday");
        break;
        case 5: puts("Friday");
        break;
        case 6: puts("Saturday");
        break;
        case 7: puts("Sunday");
        break;
        default: puts("Invalid day");
    }
    return 0;
}
