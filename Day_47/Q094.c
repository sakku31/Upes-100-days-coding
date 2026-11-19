/*
Day 47 - Question 94

QUESTION:
Find the longest word in a sentence.

SAMPLE TEST CASES:
Sample 1 input: I love programming
Sample 1 output: programming

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char s[2000], best[1000] = "";
    fgets(s, sizeof s, stdin);
    char * p = strtok(s, " \t\n");
    while (p) {
        if (strlen(p) > strlen(best)) strcpy(best, p);
        p = strtok(NULL, " \t\n");
    }
    puts(best);
    return 0;
}
