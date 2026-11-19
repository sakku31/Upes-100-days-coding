/*
Day 12 - Question 23

QUESTION:
Write a program to calculate library fine based on late days (1-5: ₹2/day, 6-10: ₹4/day, 11-30: ₹6/day, >30: Cancelled).

SAMPLE TEST CASES:
Sample 1 input: 4
Sample 1 output: Fine ₹8

Sample 2 input: 8
Sample 2 output: Fine ₹22

Sample 3 input: 15
Sample 3 output: Fine ₹60

Sample 4 input: 31
Sample 4 output: Membership Cancelled

*/

#include <stdio.h>
int main(void) {
    int d, f = 0;
    scanf("%d", &d);
    if (d > 30) puts("Membership Cancelled");
    else if (d <= 0) puts("No fine");
    else {
        if (d <= 5) f = d * 2;
        else if (d <= 10) f = 5 * 2 + (d - 5) * 4;
        else f = 5 * 2 + 5 * 4 + (d - 10) * 6;
        printf("Fine ₹%d\n", f);
    }
    return 0;
}
