/* This program is for evaluation of postfix expression.*/
#include<stdio.h>
#include<ctype.h>
#include<math.h>

#define MAXSTACK 100 // Maximum size of the stack
#define POSTFIXSIZE 100 // Maximum number of characters in the postfix expression

int stack[MAXSTACK];
int top = -1;

void push(int item) {
    if (top >= MAXSTACK - 1) {
        printf("Stack overflow\n");
        return;
    } else {
        stack[++top] = item;
    }
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

void EvalPostfix(char postfix[]) {
    int i;
    char ch;
    int val;
    int A, B;
    
    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
            push(ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
            A = pop();
            B = pop();
            
            switch (ch) {
                case '*':
                    val = B * A;
                    break;
                case '/':
                    val = B / A;
                    break;
                case '+':
                    val = B + A;
                    break;
                case '-':
                    val = B - A;
                    break;
                case '^':
                    val = pow(B,A);
                    break;
            }
            
            push(val);
        }
    }
    
    printf("\nResult of expression evaluation: %d\n", pop());
}

int main() {
    char postfix[POSTFIXSIZE];
    
    printf("ASSUMPTION: There are only five operators (*, /, +, -,^) in an expression, and the operand is a single digit only.\n\n");
    
    printf("Enter postfix expression and press right parenthesis ')' to end the expression: ");
    scanf("%s", postfix);
    
    EvalPostfix(postfix);
    
    return 0;
}
