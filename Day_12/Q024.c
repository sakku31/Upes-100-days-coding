/*
Day 12 - Question 24

QUESTION:
Write a program to calculate electricity bill based on units (0-100: ₹5, 101-200: ₹7, 201-300: ₹10, >300: ₹12).

SAMPLE TEST CASES:
Sample 1 input: 50
Sample 1 output: Bill: ₹250

Sample 2 input: 150
Sample 2 output: Bill: ₹850

Sample 3 input: 250
Sample 3 output: Bill: ₹1700

*/

#include <stdio.h>
int main(void) {
    int u, b = 0;
    scanf("%d", &u);
    if (u <= 100) b = u * 5;
    else if (u <= 200) b = 100 * 5 + (u - 100) * 7;
    else if (u <= 300) b = 100 * 5 + 100 * 7 + (u - 200) * 10;
    else b = 100 * 5 + 100 * 7 + 100 * 10 + (u - 300) * 12;
    printf("Bill: ₹%d\n", b);
    return 0;
}
