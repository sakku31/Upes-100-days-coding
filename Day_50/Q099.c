/*
Day 50 - Question 99

QUESTION:
Change the date format from dd/04/yyyy to dd-Apr-yyyy.

SAMPLE TEST CASES:
Sample 1 input: 15/04/2025
Sample 1 output: 15-Apr-2025

*/

#include <stdio.h>
int main(void) {
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    char * months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    if (m < 1 || m > 12) {
        puts("Invalid date");
        return 0;
    }
    printf("%02d-%s-%04d\n", d, months[m - 1], y);
    return 0;
}
