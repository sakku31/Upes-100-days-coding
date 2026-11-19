/*
Day 45 - Question 89

QUESTION:
Count frequency of a given character in a string.

SAMPLE TEST CASES:
Sample 1 input: programming, g
Sample 1 output: 2

*/

#include <stdio.h>
int main(void) {
    char s[1000], target;
    fgets(s, sizeof s, stdin);
    int n = 0;
    while (s[n] && s[n] != '\n' && s[n] != ',') n++;
    if (s[n] == ',') {
        int i = n + 1;
        while (s[i] == ' ') i++;
        target = s[i];
    }
    else {
        if (scanf(" %c", &target) != 1) return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++) if (s[i] == target) count++;
    printf("%d\n", count);
    return 0;
}
