/*
Day 48 - Question 95

QUESTION:
Check if one string is a rotation of another.

SAMPLE TEST CASES:
Sample 1 input: abcde, deabc
Sample 1 output: Rotation

*/

#include <stdio.h>
#include <string.h>
int main(void) {
    char a[1000], b[1000], d[2000];
    fgets(a, sizeof a, stdin);
    char * comma = strchr(a, ',');
    if (comma) {
        * comma = 0;
        strcpy(b, comma + 1);
        while (b[0] == ' ') memmove(b, b + 1, strlen(b));
    }
    else if (!fgets(b, sizeof b, stdin)) b[0] = 0;
    a[strcspn(a, "\n")] = 0;
    b[strcspn(b, "\n")] = 0;
    if (strlen(a) != strlen(b)) {
        puts("Not Rotation");
        return 0;
    }
    strcpy(d, a);
    strcat(d, a);
    puts(strstr(d, b)?"Rotation": "Not Rotation");
    return 0;
}
