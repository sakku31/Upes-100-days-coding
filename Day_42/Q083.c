/*
Day 42 - Question 83

QUESTION:
Count vowels and consonants in a string.

SAMPLE TEST CASES:
Sample 1 input: hello
Sample 1 output: Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1000];
    int v = 0, c = 0;
    fgets(s, sizeof s, stdin);
    for (int i = 0; s[i]; i++) {
        char x = (char) tolower((unsigned char) s[i]);
        if (x >= 'a' && x <= 'z') {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') v++;
            else c++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}
