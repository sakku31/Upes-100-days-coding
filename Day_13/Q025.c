/*
Day 13 - Question 25

QUESTION:
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

SAMPLE TEST CASES:
Sample 1 input: 4 2 +
Sample 1 output: 6

Sample 2 input: 10 3 %
Sample 2 output: 1

Sample 3 input: 15 5 /
Sample 3 output: 3

*/

#include <stdio.h>
int main(void) {
    int a, b;
    char op;
    scanf("%d%d %c", &a, &b, &op);
    switch (op) {
        case '+': printf("%d\n", a + b);
        break;
        case '-': printf("%d\n", a - b);
        break;
        case '*': printf("%d\n", a * b);
        break;
        case '/': if (b) printf("%d\n", a / b);
        else puts("Division by zero");
        break;
        case '%': if (b) printf("%d\n", a % b);
        else puts("Division by zero");
        break;
        default: puts("Invalid operator");
    }
    return 0;
}
