/*
Day 11 - Question 22

QUESTION:
Write a program to find profit or loss percentage given cost price and selling price.

SAMPLE TEST CASES:
Sample 1 input: 1000 1200
Sample 1 output: Profit 20%

Sample 2 input: 1000 800
Sample 2 output: Loss 20%

Sample 3 input: 1000 1000
Sample 3 output: No Profit No Loss

*/

#include <stdio.h>
int main(void) {
    double cp, sp, p;
    scanf("%lf%lf", &cp, &sp);
    if (cp == 0) {
        puts("Invalid cost price");
        return 0;
    }
    if (sp > cp) {
        p = (sp - cp) * 100 / cp;
        printf("Profit %.0f%%\n", p);
    }
    else if (sp < cp) {
        p = (cp - sp) * 100 / cp;
        printf("Loss %.0f%%\n", p);
    }
    else puts("No Profit No Loss");
    return 0;
}
