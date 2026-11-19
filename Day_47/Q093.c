/*
Day 47 - Question 93

QUESTION:
Check if two strings are anagrams of each other.

SAMPLE TEST CASES:
Sample 1 input: listen, silent
Sample 1 output: Anagrams

*/

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char a[1000], b[1000];
    int f[256] = {
        0
    };
    if (!fgets(a, sizeof a, stdin)) return 0;
    char * comma = 0;
    for (int i = 0; a[i]; i++) if (a[i] == ',') {
        comma = & a[i];
        break;
    }
    if (comma) {
        * comma = 0;
        int j = 0;
        comma++;
        while ( * comma == ' ') comma++;
        while ( * comma && * comma != '\n' && j < 999) b[j++] = * comma++;
        b[j] = 0;
    }
    else if (!fgets(b, sizeof b, stdin)) b[0] = 0;
    for (int i = 0; a[i]; i++) if (isalpha((unsigned char) a[i])) f[tolower((unsigned char) a[i])]++;
    for (int i = 0; b[i]; i++) if (isalpha((unsigned char) b[i])) f[tolower((unsigned char) b[i])]--;
    int ok = 1;
    for (int i = 0; i < 256; i++) if (f[i]) ok = 0;
    puts(ok?"Anagrams": "Not anagrams");
    return 0;
}
