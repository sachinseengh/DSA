//program to convert infix to postfix
// Example: Program for Infix to Postfix Conversion A+(B*C-(D/E^F)*G)*H
#include <stdio.h>
#include <ctype.h>
#define SIZE 50

char s[SIZE];
int top = -1;

int push(char elem) {
    s[++top] = elem;
    return 0;
}

char pop() {
    return s[top--];
}

int pr(char elem) {
    switch (elem) {
        case '#':
            return 0;
        case '(':
            return 1;
        case '+':
        case '-':
            return 2;
        case '*':
        case '/':
            return 3;
        case '^':
            return 4;
    }
    return 0;
}

int main() {
    char infx[SIZE], pofx[SIZE], ch, elem;
    int i = 0, k = 0;

    printf("Enter Infix Expression: ");
    scanf("%s", infx);
    push('#');

    while ((ch = infx[i++]) != '\0') {
        if (ch == '(') {
            push(ch);
        } else if (isalnum(ch)) {
            pofx[k++] = ch;
        } else if (ch == ')') {
            while (s[top] != '(') {
                pofx[k++] = pop();
            }
            elem = pop();
        } else {
            while (pr(s[top]) >= pr(ch)) {
                pofx[k++] = pop();
            }
            push(ch);
        }
    }

    while (s[top] != '#') {
        pofx[k++] = pop();
    }

    pofx[k] = '\0';

    printf("\nGiven Infix Expression: %s\nPostfix Expression: %s\n", infx, pofx);

    return 0;
}
